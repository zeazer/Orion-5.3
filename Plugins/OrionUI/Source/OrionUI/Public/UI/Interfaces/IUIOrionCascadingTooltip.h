// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/Anchors.h"
#include "IUIOrionCascadingTooltip.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UUIOrionCascadingTooltip : public UInterface
{
	GENERATED_BODY()
};

class ORIONUI_API IUIOrionCascadingTooltip
{
	GENERATED_BODY()
public:

	virtual bool TooltipHoverTick(float InDeltaTime);
	virtual void TooltipHoverReset();
	virtual void TooltipHoverComplete(TSubclassOf<class UOrionTooltipWidget> ToolTipWidgetClass, const FAnchors& WidgetPosition = FAnchors(0.f,0.f,1.f,1.f));
	virtual void TooltipHoverComplete(const FString& CascadeIdString);
};

inline bool IUIOrionCascadingTooltip::TooltipHoverTick(float InDeltaTime)
{
	return true;
}

inline void IUIOrionCascadingTooltip::TooltipHoverReset()
{
}

inline void IUIOrionCascadingTooltip::TooltipHoverComplete(TSubclassOf<class UOrionTooltipWidget> ToolTipWidgetClass, const FAnchors& WidgetPosition)
{
}

inline void IUIOrionCascadingTooltip::TooltipHoverComplete(const FString& CascadeIdString)
{
}
