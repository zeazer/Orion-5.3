// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UI/Controllers/OrionUIControllerBase.h"
#include "OrionBlueprintFunctionLibrary.generated.h"


class UOrionMenuWidget;
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUserWidgetCreated, UUserWidget*, UserWidgetCreated);

UCLASS()
class ORIONUI_API UOrionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "OrionUI", meta = (WorldContext = "WorldContextObject"))
	static TMap<FName, class TSubclassOf<UOrionMenuWidget>> GetMenuWidgets(UObject* WorldContextObject);

	static UUserWidget* CreateUserWidget(const UObject* WorldContextObject, TSubclassOf<UUserWidget> PoolWidget);

	UFUNCTION(BlueprintCallable, Category = "OrionUI", meta = (WorldContext = "WorldContextObject"))
	static void DisplayScreen(UObject* WorldContextObject, FName MenuId);

	UFUNCTION(BlueprintCallable, Category = "OrionUI", meta = (WorldContext = "WorldContextObject"))
	static class UOrionMenuWidget* HideScreen(UObject* WorldContextObject, class UOrionMenuWidget* MenuWidget);

	UFUNCTION(BlueprintCallable, Category = "OrionUI", meta = (WorldContext = "WorldContextObject"))
	static void ClearScreen(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "OrionUI", meta = (WorldContext = "WorldContextObject"))
	static class UOrionUIControllerBase* GetUIController(UObject* WorldContextObject, TSubclassOf<UOrionUIControllerBase> UIControllerClass);
	
	UFUNCTION(BlueprintPure, Category = "Ability")
	static bool BetterProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ViewportPosition, bool bPlayerViewportRelative);

	UFUNCTION(BlueprintPure, Category = "OrionUI", meta = (WorldContext = "WorldContextObject"))
	static class UOrionTooltipWidget* CreateToolTipWidget(UObject* WorldContextObject, TSubclassOf<UOrionTooltipWidget> TooltipWidgetClass);
};
