// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OrionActivatableWidgetStack.h"
#include "Interfaces/IUIOrionMasterCanvas.h"
#include "OrionMasterCanvas.generated.h"

/**
 * 
 */
UCLASS()
class ORIONUI_API UOrionMasterCanvas : public UUserWidget , public IUIOrionMasterCanvas
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget), Category="OrionUI")
	UOrionActivatableWidgetStack* MasterCanvas;

	UPROPERTY(BlueprintReadOnly,meta=(BindWidget),  Category="OrionUI")
	class UBorder* BackgroundImage;
	TSoftObjectPtr<UTexture2D> NewBackgroundTexture;
	bool bDisplayBackground = false;

	UFUNCTION(BlueprintCallable)
	void DisplayBackgroundIamge(TSoftObjectPtr<UTexture2D> BackgroundTexture);

	UFUNCTION(BlueprintCallable)
	void HideBackgroundIamge();

	UFUNCTION()
	void OnBackgroundImageLoaded();

	virtual void PushMenuWidget(class TSubclassOf<UOrionMenuWidget> MenuWidget, TFunctionRef<void(UOrionMenuWidget&)> InstanceInitFunc) override;

	virtual void PopMenuWidget(class UOrionMenuWidget* MenuWidget) override;

	virtual void ClearMenuScreen() override;
};
