// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/OrionMasterCanvas.h"

#include "Components/Border.h"
#include "Engine/AssetManager.h"

void UOrionMasterCanvas::DisplayBackgroundIamge(TSoftObjectPtr<UTexture2D> BackgroundTexture)
{
	NewBackgroundTexture = BackgroundTexture;
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	Streamable.RequestAsyncLoad(BackgroundTexture.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UOrionMasterCanvas::OnBackgroundImageLoaded));
	bDisplayBackground = true;
}

void UOrionMasterCanvas::HideBackgroundIamge()
{
	BackgroundImage->SetBrushColor(FLinearColor::Transparent);
	BackgroundImage->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	bDisplayBackground = false;
}

void UOrionMasterCanvas::OnBackgroundImageLoaded()
{
	if (bDisplayBackground)
	{
		BackgroundImage->SetBrushFromTexture(NewBackgroundTexture.Get());
		BackgroundImage->SetBrushColor(FLinearColor::White);
		BackgroundImage->SetVisibility(ESlateVisibility::Visible);
	}
}

void UOrionMasterCanvas::PushMenuWidget(TSubclassOf<UOrionMenuWidget> MenuWidget, TFunctionRef<void(UOrionMenuWidget&)> InstanceInitFunc)
{
	if (MasterCanvas)
	{
		MasterCanvas->AddWidget(MenuWidget, InstanceInitFunc);
	}
}

void UOrionMasterCanvas::PopMenuWidget(UOrionMenuWidget* MenuWidget)
{
	if (MasterCanvas)
	{
		MasterCanvas->RemoveWidget(*MenuWidget);
	}
}

void UOrionMasterCanvas::ClearMenuScreen()
{
	if (MasterCanvas)
	{
		MasterCanvas->ClearToBase();
		HideBackgroundIamge();
	}
}
