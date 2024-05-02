// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/OrionHUD.h"
#include "OrionUI/Public/UI/OrionMasterCanvas.h"
#include "OrionBlueprintFunctionLibrary.h"
#include "UI/Widgets/OrionMenuWidget.h"
#include "UI/Interfaces/IUIOrionController.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerInput.h"
#include "OrionUI/Public/UI/Interfaces/IUIOrionMasterCanvas.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Controllers/OrionUIControllerBase.h"
#include "UI/Widgets/OrionCascadingTooltipSystem.h"

void AOrionHUD::BeginPlay()
{
	Super::BeginPlay();
	if (!MasterHUDWidget && MasterHUDWidgetClass->IsValidLowLevel())
	{
		MasterHUDWidget = CreateWidget<UOrionMasterCanvas>(GetOwningPlayerController(), MasterHUDWidgetClass);
		MasterHUDWidget->AddToPlayerScreen(10000);
	}
	if (!TooltipSystem && TooltipSystemClass)
	{
		TooltipSystem = CreateWidget<UOrionCascadingTooltipSystem>(GetOwningPlayerController(), TooltipSystemClass);
		TooltipSystem->AddToPlayerScreen(100000);
	}
	UserWidgetPool = FUserWidgetPool(*MasterHUDWidget);
	InitializeMenuWidgets();
	InitializePool();

	if (const auto Controller = Cast<IUIOrionController>(GetOwningPlayerController()))
	{
		Controller->GetPostPlayerTravel().BindDynamic(this, &AOrionHUD::OpenStartMenu);
	}
	OpenStartMenu();
}

void AOrionHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UserWidgetPool.ReleaseAll(true);
}

void AOrionHUD::InitializeMenuWidgets()
{
	if (auto MainCanvas = Cast<IUIOrionMasterCanvas>(MasterHUDWidget))
	{
		OrionMenuWidgets = UOrionBlueprintFunctionLibrary::GetMenuWidgets(GetOwningPlayerController());
	}
}

void AOrionHUD::InitializePool()
{
	UserWidgetPool.SetWorld(GetWorld());
	UserWidgetPool.SetDefaultPlayerController(GetOwningPlayerController());
}

void AOrionHUD::ClearScreen()
{
	if (auto IMasterCanvas = Cast<IUIOrionMasterCanvas>(MasterHUDWidget))
	{
		IMasterCanvas->ClearMenuScreen();
	}
}

void AOrionHUD::DisplayWidgetStyle(UOrionMenuWidget* Widget)
{
	if (const auto WidgetStyle = Widget->OrionMenuStyle)
	{
		if (WidgetStyle->bDisablePlayerInput)
		{
			if (const auto Controller = GetOwningPlayerController())
			{
				ReleaseAllHeldKeys(Controller);
				if (const auto OwningPlayerController = GetOwningPlayerController())
				{
					OwningPlayerController->bShowMouseCursor = WidgetStyle->bShowCursor;
				}

				EnableInput(Controller);

				SetInputMode(Controller, Widget);
			}
		}

		if (WidgetStyle->bPauseGame)
		{
			const bool bIsGameAlreadyPaused = WidgetStyle->bPauseGame;

			if (!bIsGameAlreadyPaused)
			{
				UGameplayStatics::SetGamePaused(GetWorld(), true);
			}
		}

		if (!WidgetStyle->BackgroundImage.IsNull())
		{
			MasterHUDWidget->DisplayBackgroundIamge(WidgetStyle->BackgroundImage);
		}
		else
		{
			MasterHUDWidget->HideBackgroundIamge();
		}
	}
}

UObject* AOrionHUD::GetModel()
{
	return GetOwningPawn();
}

void AOrionHUD::DisplayScreen(const FName& MenuId)
{
	if (OrionMenuWidgets.Contains(MenuId))
	{
		if (const auto IMasterCanvas = Cast<IUIOrionMasterCanvas>(MasterHUDWidget))
		{
			IMasterCanvas->PushMenuWidget(OrionMenuWidgets[MenuId],
			[&](UOrionMenuWidget& Widget)
			{
				Widget.OnDisplay();
				DisplayWidgetStyle(&Widget);
			}
			);
		}
	}
}

void AOrionHUD::DisplayScreen(const float& MenuId)
{
	if (const auto MenuIdName = MenuIdConvertList.Find(MenuId))
	{
		DisplayScreen(*MenuIdName);
	}
}

class UOrionMenuWidget* AOrionHUD::HideScreen(class UOrionMenuWidget* MenuWidget)
{
	if (MenuWidget)
	{
		if (const auto IMasterCanvas = Cast<IUIOrionMasterCanvas>(MasterHUDWidget))
		{
			IMasterCanvas->PopMenuWidget(MenuWidget);
			MenuWidget->OnHide();
			if (const auto TopWidget = IMasterCanvas->GetActiveMenuWidget())
			{
				DisplayWidgetStyle(TopWidget);
			}
		}
	}
	return MenuWidget;
}

UOrionMenuWidget* AOrionHUD::HideTopScreen()
{
	if (const auto IMasterCanvas = Cast<IUIOrionMasterCanvas>(MasterHUDWidget))
	{
		return HideScreen(IMasterCanvas->GetActiveMenuWidget());
	}
	return nullptr;
}


void AOrionHUD::OpenStartMenu()
{
	if (const auto World = GetWorld())
	{
		if (auto const GameMode = World->GetAuthGameMode<AGameModeBase>())
		{
			if (const auto Menu = StartMenus.Find(GameMode->PlayerStateClass))
			{
				DisplayScreen(*Menu);
			}
		}
	}
}

UOrionUIControllerBase* AOrionHUD::RegisterUIController(TSubclassOf<UOrionUIControllerBase> UIControllerClass)
{
	if (UIControllers.Contains(UIControllerClass))
	{
		return UIControllers[UIControllerClass];
	}
	const auto Controller = NewObject<UOrionUIControllerBase>(this, UIControllerClass);
	UIControllers.Add(UIControllerClass, Controller);
	return Controller;
}

UOrionUIControllerBase* AOrionHUD::GetUIController(TSubclassOf<UOrionUIControllerBase> UIControllerClass)
{
	if (UIControllers.Contains(UIControllerClass))
	{
		if (const auto Controller = *UIControllers.Find(UIControllerClass))
		{
			return Controller;
		}
	}
	return nullptr;
}

UOrionCascadingTooltipSystem* AOrionHUD::GetCascadingTooltipSystem()
{
	return TooltipSystem;
}


void AOrionHUD::ReleaseAllHeldKeys(APlayerController* PlayerController)
{
	for (int i = 0; i < PlayerController->InputComponent->GetNumActionBindings(); i++)
	{
		auto& ActionBinding = PlayerController->InputComponent->GetActionBinding(i);
		if (ActionBinding.KeyEvent == EInputEvent::IE_Released && IsActionPressed(ActionBinding.GetActionName(), PlayerController->PlayerInput))
		{
			ActionBinding.ActionDelegate.Execute(FKey());
		}
	}

	if (auto OwningPawn = PlayerController->GetOwner())
	{
		for (int i = 0; i < OwningPawn->InputComponent->GetNumActionBindings(); i++)
		{
			auto& ActionBinding = OwningPawn->InputComponent->GetActionBinding(i);
			if (ActionBinding.KeyEvent == EInputEvent::IE_Released && IsActionPressed(ActionBinding.GetActionName(), PlayerController->PlayerInput))
			{
				ActionBinding.ActionDelegate.Execute(FKey());
			}
		}
	}
}

bool AOrionHUD::IsActionPressed(FName ActionName, UPlayerInput* Input)
{
	auto Keys = Input->GetKeysForAction(ActionName);
	for (auto& Key : Keys)
	{
		if (Input->IsPressed(Key.Key))
		{
			if (Key.bAlt && !Input->IsAltPressed()) continue;
			if (Key.bShift && !Input->IsShiftPressed()) continue;
			if (Key.bCtrl && !Input->IsCtrlPressed()) continue;
			if (Key.bCmd && !Input->IsCmdPressed()) continue;

			return true;
		}
	}

	return false;
}

void AOrionHUD::SetInputMode(APlayerController* PlayerController, UOrionUserWidget* CurrentScreenWidget)
{
	if (PlayerController->bShowMouseCursor)
	{
		FInputModeGameAndUI InputMode;
		InputMode.SetHideCursorDuringCapture(false);
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockInFullscreen);
		InputMode.SetWidgetToFocus(CurrentScreenWidget->TakeWidget());
		PlayerController->SetInputMode(InputMode);
	}
	else
	{
		PlayerController->SetInputMode(FInputModeGameOnly());
	}
}
