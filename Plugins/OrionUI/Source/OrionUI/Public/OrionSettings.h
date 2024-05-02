// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OrionSettings.generated.h"

UENUM(BlueprintType)
enum EViewType : uint8
{
	PC,
	PS5,
	XBOXONE,
	COUNT
};

UCLASS(Config=Game, defaultconfig, meta = (DisplayName="Orion Settings"))
class ORIONUI_API UOrionSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UOrionSettings();
	
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General")
	TEnumAsByte<EViewType> ViewType;
};
