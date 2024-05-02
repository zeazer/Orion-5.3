// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "IUIOrionAnimUserWidget.generated.h"


UENUM(BlueprintType)
enum class EOrionAnimMode
{
	InAnim,
	OutAnim
};

UINTERFACE(MinimalAPI, BlueprintType)
class UUIOrionAnimUserWidget : public UInterface
{
	GENERATED_BODY()
};

class ORIONUI_API IUIOrionAnimUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent,Category="OrionUI")
	void AnimFunction(EOrionAnimMode AnimMode);
};
