// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UI/Interfaces/IUIOrionCascadingTooltip.h"
#include "OrionTooltipWidget.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class ORIONUI_API UOrionTooltipWidget : public UCommonActivatableWidget, public IUIOrionCascadingTooltip
{
	GENERATED_BODY()

public:
	virtual void NativePreConstruct() override;

	virtual void NativeOnInitialized() override;

	virtual bool IsHovered() const override;

	virtual void RemoveFromParent() override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ApplyStyle();

	virtual void TooltipHoverReset() override;
	virtual void TooltipHoverComplete(TSubclassOf<class UOrionTooltipWidget> ToolTipWidgetClass, const FAnchors& WidgetPosition = FAnchors(0.f, 0.f, 1.f, 1.f)) override;
	virtual void TooltipHoverComplete(const FString& CascadeIdString) override;

	void SetTooltipPosition(UCommonUserWidget* WidgetToInheritPositionFrom);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = "OrionUI")
	class UOrionTooltipStyle* OrionTooltipStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = "OrionUI")
	class UOrionTooltipSettingStyle* OrionTooltipSettingStyle;

	UPROPERTY()
	class UOrionTooltipWidget* OrionCascadedToolTipWidget;

	FAnchors WidgetAnchor;
};
