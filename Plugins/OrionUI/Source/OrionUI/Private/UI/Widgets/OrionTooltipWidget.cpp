// Fill out your copyright notice in the Description page of Project Settin
#include "UI/Widgets/OrionTooltipWidget.h"

#include "OrionBlueprintFunctionLibrary.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "UI/Structs/OrionTooltipStyle.h"

void UOrionTooltipWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	ApplyStyle();
}

void UOrionTooltipWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	ApplyStyle();
}

bool UOrionTooltipWidget::IsHovered() const
{
	if (Super::IsHovered())
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("Hover UserWidget!"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("No Hover UserWidget!"));
	}
	return OrionCascadedToolTipWidget ? OrionCascadedToolTipWidget->IsHovered() || Super::IsHovered() : Super::IsHovered();
}

void UOrionTooltipWidget::RemoveFromParent()
{
	TooltipHoverReset();
	Super::RemoveFromParent();
}

void UOrionTooltipWidget::TooltipHoverReset()
{
	if (OrionCascadedToolTipWidget)
	{
		OrionCascadedToolTipWidget->RemoveFromParent();
	}
}

void UOrionTooltipWidget::TooltipHoverComplete(TSubclassOf<UOrionTooltipWidget> ToolTipWidgetClass, const FAnchors& WidgetPosition)
{
	OrionCascadedToolTipWidget = UOrionBlueprintFunctionLibrary::CreateToolTipWidget(this, ToolTipWidgetClass);
	OrionCascadedToolTipWidget->SetTooltipPosition(this);
}

void UOrionTooltipWidget::TooltipHoverComplete(const FString& CascadeIdString)
{
	if (OrionTooltipStyle && OrionTooltipStyle->TooltipCascadeID.Contains(CascadeIdString))
	{
		if (const auto Anchor = OrionTooltipStyle->TooltipCascadeAnchors.Find(CascadeIdString))
		{
			TooltipHoverComplete(OrionTooltipStyle->TooltipCascadeID[CascadeIdString], *Anchor);
		}
		else
		{
			TooltipHoverComplete(OrionTooltipStyle->TooltipCascadeID[CascadeIdString], FAnchors(0.f,0.f,1.f,1.f));
		}
	}
}

void UOrionTooltipWidget::SetTooltipPosition(UCommonUserWidget* WidgetToInheritPositionFrom)
{
	auto pos = WidgetToInheritPositionFrom->GetCachedGeometry().Position;
	if (auto CanvasSlot = Cast<UCanvasPanelSlot>(Slot))
	{
		CanvasSlot->SetPosition(FVector2D(pos.X,pos.Y));
	}
}
