// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Async/PoolAsyncActionLoop.h"

#include "OrionBlueprintFunctionLibrary.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"


UPoolAsyncActionLoop* UPoolAsyncActionLoop::PoolLoopAsyncNode(const UObject* WorldContextObject, TSoftClassPtr<UOrionUserWidget> PoolWidget, int32 Count)
{
	UPoolAsyncActionLoop* Node = NewObject<UPoolAsyncActionLoop>();
	if (Node)
	{
		Node->bActive = false;
		Node->WorldContextObject = WorldContextObject;
		Node->PoolWidget = PoolWidget;
		Node->Count = Count;
	}
	return Node;
}

void UPoolAsyncActionLoop::Activate()
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

		bActive = true;
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindUObject(this, &UPoolAsyncActionLoop::InternalTick);
		WorldContextObject->GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.1f, true);
	}
	else
	{
		FFrame::KismetExecutionMessage(TEXT("Invalid world context obj"), ELogVerbosity::Error);
	}
}

void UPoolAsyncActionLoop::InternalTick()
{
	if (ResultingWidgetClass->IsValidLowLevel())
	{
		InternalCompleted();
	}
}

void UPoolAsyncActionLoop::InternalCompleted()
{
	if (WorldContextObject)
	{
		WorldContextObject->GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		TimerHandle.Invalidate();

		for (int i = 0; i < Count; ++i)
		{
			Completed.Broadcast(Cast<UOrionUserWidget>(UOrionBlueprintFunctionLibrary::CreateUserWidget(WorldContextObject, ResultingWidgetClass)), i);
		}

		bActive = false;
		ResultingWidgetClass = nullptr;
	}
}
