// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrionUserWidget.h"
#include "UI/Structs/OrionMenuStyle.h"

#include "OrionMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ORIONUI_API UOrionMenuWidget : public UOrionUserWidget
{
	GENERATED_BODY()

public:

	UOrionMenuWidget();
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintNativeEvent, Category="OrionUI")
	void OnDisplay();
	UFUNCTION()
	void OnDisplayComplete();

	UFUNCTION(BlueprintNativeEvent, Category="OrionUI")
	void OnHide();
	UFUNCTION()
	void OnHideComplete();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI")
	FName OrionMenuId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = "OrionUI")
	UOrionMenuStyle* OrionMenuStyle;
};
