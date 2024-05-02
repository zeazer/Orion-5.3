// Fill out your copyright notice in the Description page of Project Settin

#include "UI/Widgets/OrionViewControllerWidget.h"
#include "CommonActivatableWidgetSwitcher.h"
#include "OrionSettings.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/WidgetSwitcher.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "UI/OrionHUD.h"
#include "UI/Controllers/OrionUIControllerBase.h"
#include "UI/Interfaces/IUIOrionController.h"

ENUM_RANGE_BY_COUNT(EViewType, EViewType::COUNT)

void UOrionViewControllerWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (bInitialized)
	{
		return;
	}
	UpdateView(DebugViewClass);
}

void UOrionViewControllerWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (const auto Settings = GetMutableDefault<UOrionSettings>())
	{
		if (PlatformViewClasses.Contains(Settings->ViewType))
		{
			bInitialized = true;
			UpdateView(PlatformViewClasses[Settings->ViewType]);
		}
		Settings->OnSettingChanged().AddUObject(this, &UOrionViewControllerWidget::OnUpdateView);
	}

	if (!UIControllerClass)
	{
		return;
	}
	if (const auto HUD = Cast<AOrionHUD>(GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		UIControllerInstance = HUD->RegisterUIController(UIControllerClass);
		UIControllerInstance->RegisterWidget(this);
	}
}

void UOrionViewControllerWidget::ForceUpdate()
{
	switch (ViewDataMode)
	{
	case EViewDataMode::ViewData: UIControllerInstance->BlueprintUpdate(ViewData);
		break;
	case EViewDataMode::DataTable: UIControllerInstance->BlueprintUpdate(ViewDataTable);
		break;
	}
}


UWidget* UOrionViewControllerWidget::GetActiveView()
{
	return ViewInstance;
}

void UOrionViewControllerWidget::UpdateView(const TSoftClassPtr<UCommonUserWidget>& View)
{
	ActiveViewClass = View;
	if (ActiveViewClass.IsNull())
	{
		return;
	}
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	Streamable.RequestAsyncLoad(View.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UOrionViewControllerWidget::OnLoadComplete));
}

void UOrionViewControllerWidget::OnUpdateView(UObject* Obj, FPropertyChangedEvent& ChangeEvent)
{
	if (const auto Settings = GetMutableDefault<UOrionSettings>())
	{
		if (PlatformViewClasses.Contains(Settings->ViewType))
		{
			UpdateView(PlatformViewClasses[Settings->ViewType]);
		}
	}
}

void UOrionViewControllerWidget::OnLoadComplete()
{
	Canvas->ClearChildren();
	ViewInstance = CreateWidget<UCommonUserWidget>(this, ActiveViewClass.Get());
	Canvas->AddChild(ViewInstance);
	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(ViewInstance->Slot))
	{
		CanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
		CanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
		CanvasSlot->SetAutoSize(true);
	}
	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Slot))
	{
		CanvasSlot->SetAutoSize(true);
	}
	if (UIControllerInstance)
	{
		switch (ViewDataMode)
		{
		case EViewDataMode::ViewData: UIControllerInstance->BlueprintUpdate(ViewData);
			break;
		case EViewDataMode::DataTable: UIControllerInstance->BlueprintUpdate(ViewDataTable);
			break;
		}
	}
}
