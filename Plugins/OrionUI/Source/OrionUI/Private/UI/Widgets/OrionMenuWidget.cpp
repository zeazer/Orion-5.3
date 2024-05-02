// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widgets/OrionMenuWidget.h"
#include "Blueprint/WidgetTree.h"
#include "UI/Interfaces/IUIOrionAnimUserWidget.h"

void UOrionMenuWidget::OnDisplay_Implementation()
{
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	WidgetTree->ForEachWidget([&](UWidget* Widget)
	{
		if (auto Anim = Cast<IUIOrionAnimUserWidget>(Widget))
		{
			IUIOrionAnimUserWidget::Execute_AnimFunction(Widget, EOrionAnimMode::InAnim);
		}
	});
}

void UOrionMenuWidget::OnHide_Implementation()
{
	WidgetTree->ForEachWidget([&](UWidget* Widget)
	{
		if (auto Anim = Cast<IUIOrionAnimUserWidget>(Widget))
		{
			IUIOrionAnimUserWidget::Execute_AnimFunction(Widget, EOrionAnimMode::OutAnim);
		}
	});
}

UOrionMenuWidget::UOrionMenuWidget()
{
	if (!OrionMenuStyle)
	{
		OrionMenuStyle = NewObject<UOrionMenuStyle>(this,TEXT("OrionMenuStyle"));
	}
}

void UOrionMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UOrionMenuWidget::OnDisplayComplete()
{
}

void UOrionMenuWidget::OnHideComplete()
{
	SetVisibility(ESlateVisibility::Collapsed);
}
