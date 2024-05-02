// Fill out your copyright notice in the Description page of Project Settin
#include "UI/Widgets/OrionCascadingTooltipSystem.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "UI/Widgets/OrionTooltipWidget.h"

UOrionTooltipWidget* UOrionCascadingTooltipSystem::CreateTooltip(TSubclassOf<UOrionTooltipWidget> TooltipWidgetClass)
{
	auto Tooltip = WidgetTree->ConstructWidget<UOrionTooltipWidget>(TooltipWidgetClass, TEXT("ToolTip"));
	
	auto PanelSlot = TooltipCanvas->AddChild(Tooltip);
	if (auto CanvasSlot = Cast<UCanvasPanelSlot>(PanelSlot))
	{
		CanvasSlot->SetAutoSize(true);
	}

	return Tooltip;
}
