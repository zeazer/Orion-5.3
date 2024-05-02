// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Widgets/OrionUserWidget.h"
#include "UI/Interfaces/IUIOrionAnimUserWidget.h"
#include "OrionAnimUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ORIONUI_API UOrionAnimUserWidget : public UOrionUserWidget, public IUIOrionAnimUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidgetAnimOptional))
	UWidgetAnimation* AnimateIn;
	UPROPERTY(meta = (BindWidgetAnimOptional))
	UWidgetAnimation* AnimateOut;

	virtual void AnimFunction_Implementation(EOrionAnimMode AnimMode) override;
};
