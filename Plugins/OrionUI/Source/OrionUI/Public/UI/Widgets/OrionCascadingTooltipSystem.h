// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "OrionCascadingTooltipSystem.generated.h"

UCLASS()
class ORIONUI_API UOrionCascadingTooltipSystem : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget), Category = "OrionUI")
	class UCanvasPanel* TooltipCanvas;

	class UOrionTooltipWidget* CreateTooltip(TSubclassOf<UOrionTooltipWidget> TooltipWidgetClass);
};
