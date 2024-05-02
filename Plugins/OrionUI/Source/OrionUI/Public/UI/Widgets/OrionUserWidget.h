// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UI/Interfaces/IUIOrionCascadingTooltip.h"
#include "OrionUserWidget.generated.h"

class UOrionTooltipWidget;

UCLASS()
class ORIONUI_API UOrionUserWidget : public UCommonActivatableWidget, public IUIOrionCascadingTooltip
{
	GENERATED_BODY()

public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeOnInitialized() override;

	virtual bool IsHovered() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	TSubclassOf<UOrionTooltipWidget> OrionToolTipWidgetClass;

	UPROPERTY()
	class UOrionTooltipWidget* OrionToolTipWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = "OrionUI")
	class UOrionTooltipSettingStyle* OrionTooltipSettingStyle;

private:
	virtual bool TooltipHoverTick(float InDeltaTime) override;
	virtual void TooltipHoverReset() override;
	virtual void TooltipHoverComplete(TSubclassOf<class UOrionTooltipWidget> ToolTipWidgetClass, const FAnchors& WidgetPosition = FAnchors(0.f,0.f,1.f,1.f)) override;

	float HoverDelay = 0.f;
	float HoverDelayOrigin = 0.f;
};
