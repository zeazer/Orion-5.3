// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/Widgets/OrionMenuWidget.h"
#include "UI/Controllers/OrionUIControllerBase.h"
#include "Blueprint/UserWidgetPool.h"
#include "OrionHUD.generated.h"

/**
 *
 */
UCLASS()
class ORIONUI_API AOrionHUD : public AHUD
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void InitializeMenuWidgets();

	void InitializePool();

	void DisplayScreen(const FName& MenuId);
	void DisplayScreen(const float& MenuId);
	void DisplayWidgetStyle(class UOrionMenuWidget* Widget);
	
	class UOrionMenuWidget* HideScreen(class UOrionMenuWidget* MenuWidget);
	class UOrionMenuWidget* HideTopScreen();
	
	void ClearScreen();


	virtual UObject* GetModel();

	class UOrionUIControllerBase* RegisterUIController(TSubclassOf<UOrionUIControllerBase> UIControllerClass);

	class UOrionUIControllerBase* GetUIController(TSubclassOf<UOrionUIControllerBase> UIControllerClass);

	class UOrionCascadingTooltipSystem* GetCascadingTooltipSystem();

	UPROPERTY(EditDefaultsOnly, Category="OrionUI")
	TSubclassOf<class UOrionMasterCanvas> MasterHUDWidgetClass;
	
	UPROPERTY(EditDefaultsOnly, Category="OrionUI")
	TSubclassOf<class UOrionCascadingTooltipSystem> TooltipSystemClass;

	UPROPERTY(EditDefaultsOnly, Category="OrionUI")
	TMap<float, FName> MenuIdConvertList;

	FUserWidgetPool& GetUserWidgetPool() { return UserWidgetPool; }

	UPROPERTY(EditDefaultsOnly, Category="OrionUI")
	TMap<TSubclassOf<class APlayerState>, FName> StartMenus;

private:
	UPROPERTY()
	class UOrionMasterCanvas* MasterHUDWidget = nullptr;

	UPROPERTY()
	class UOrionCascadingTooltipSystem* TooltipSystem = nullptr;

	UPROPERTY()
	TMap<FName, class TSubclassOf<UOrionMenuWidget>> OrionMenuWidgets;
	
	UPROPERTY()
	FUserWidgetPool UserWidgetPool;

	UFUNCTION()
	void OpenStartMenu();

	UPROPERTY()
	TMap<TSubclassOf<UOrionUIControllerBase>, UOrionUIControllerBase*> UIControllers;

	void ReleaseAllHeldKeys(APlayerController* PlayerController);

	bool IsActionPressed(FName ActionName, UPlayerInput* Input);
	
	void SetInputMode(APlayerController* PlayerController, class UOrionUserWidget* CurrentScreenWidget);
};
