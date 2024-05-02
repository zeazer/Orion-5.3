// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "OrionActivatableWidgetStack.generated.h"

/**
 * 
 */
UCLASS()
class ORIONUI_API UOrionActivatableWidgetStack : public UCommonActivatableWidgetStack
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="OrionUI")
	void ClearToBase();
	
};
