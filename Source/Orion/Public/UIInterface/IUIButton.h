// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "IUIButton.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UUIButton : public UInterface
{
	GENERATED_BODY()
};

class ORION_API IUIButton
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Orion")
	void SetButton(UButtonViewData* ButtonData);
};
