// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Async/PoolAsyncAction.h"

#include "OrionBlueprintFunctionLibrary.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"


UPoolAsyncAction* UPoolAsyncAction::PoolAsyncNode(const UObject* WorldContextObject, TSoftClassPtr<UCommonUserWidget> PoolWidget)
{
	UPoolAsyncAction* Node = NewObject<UPoolAsyncAction>();
	if (Node)
	{
		Node->bActive=false;
		Node->WorldContextObject = WorldContextObject;
		Node->PoolWidget = PoolWidget;
	}
	return Node;
}

void UPoolAsyncAction::Activate()
{
	if (bActive)
	{
		FFrame::KismetExecutionMessage(TEXT("Async action is already running"), ELogVerbosity::Warning);
		return;
	}
 
	FFrame::KismetExecutionMessage(TEXT("Started Activate!"), ELogVerbosity::Log);
 
	if (WorldContextObject)
	{
		ResultingWidgetClass = nullptr;

		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
		Streamable.RequestAsyncLoad(PoolWidget.ToSoftObjectPath(), FStreamableDelegate::CreateLambda([&]() 
		{
			ResultingWidgetClass = PoolWidget.LoadSynchronous();
		}
		));

		bActive=true;
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindUObject(this,&UPoolAsyncAction::InternalTick);
		WorldContextObject->GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.1f, true);
	}
	else
	{
		FFrame::KismetExecutionMessage(TEXT("Invalid world context obj"), ELogVerbosity::Error);
	}
 
}

void UPoolAsyncAction::InternalTick()
{
	if (ResultingWidgetClass->IsValidLowLevel())
	{
		InternalCompleted();
	}
}

void UPoolAsyncAction::InternalCompleted()
{
	if (WorldContextObject)
	{
		WorldContextObject->GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		TimerHandle.Invalidate();
		Completed.Broadcast(Cast<UOrionUserWidget>(UOrionBlueprintFunctionLibrary::CreateUserWidget(WorldContextObject,ResultingWidgetClass.Get())));
		bActive=false;
		ResultingWidgetClass = nullptr;
	}
}