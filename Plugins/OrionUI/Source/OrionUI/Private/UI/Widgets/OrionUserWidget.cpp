// Fill out your copyright notice in the Description page of Project Settin
#include "UI/Widgets/OrionUserWidget.h"

#include "OrionBlueprintFunctionLibrary.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "UI/Structs/OrionTooltipSettingStyle.h"
#include "UI/Widgets/OrionTooltipWidget.h"

void UOrionUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (OrionTooltipSettingStyle)
	{
		if (IsHovered())
		{
			switch (OrionTooltipSettingStyle->ToolTipMode)
			{
			case EToolTipMode::Hover: if (TooltipHoverTick(InDeltaTime))
				{
					TooltipHoverComplete(OrionToolTipWidgetClass, FAnchors(0.f, 0.f, 1.f, 1.f));
				}
				break;
			default: ;
			}
		}
		else
		{
			TooltipHoverReset();
		}
	}
}

void UOrionUserWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (OrionTooltipSettingStyle)
	{
		HoverDelayOrigin = OrionTooltipSettingStyle->TooltipDelay;
	}
}

bool UOrionUserWidget::IsHovered() const
{
	if (Super::IsHovered())
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("Hover UserWidget!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No Hover UserWidget!"));
	}
	return OrionToolTipWidget ? OrionToolTipWidget->IsHovered() || Super::IsHovered() : Super::IsHovered();
}

bool UOrionUserWidget::TooltipHoverTick(float InDeltaTime)
{
	if (HoverDelay >= 0)
	{
		HoverDelay -= InDeltaTime;
	}
	return HoverDelay <= 0;
}

void UOrionUserWidget::TooltipHoverReset()
{
	HoverDelay = HoverDelayOrigin;
	if (OrionToolTipWidget)
	{
		OrionToolTipWidget->RemoveFromParent();
		OrionToolTipWidget = nullptr;
	}
}

void UOrionUserWidget::TooltipHoverComplete(TSubclassOf<class UOrionTooltipWidget> ToolTipWidgetClass, const FAnchors& WidgetPosition)
{
	if (!OrionToolTipWidget)
	{
		OrionToolTipWidget = UOrionBlueprintFunctionLibrary::CreateToolTipWidget(this, ToolTipWidgetClass);
		OrionToolTipWidget->SetTooltipPosition(this);
	}
}
