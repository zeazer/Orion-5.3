// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "IUIOrionController.generated.h"
DECLARE_DYNAMIC_DELEGATE(FOnPostPlayerTravel);

UINTERFACE(MinimalAPI, BlueprintType)
class UUIOrionController : public UInterface
{
	GENERATED_BODY()
};

class ORIONUI_API IUIOrionController
{
	GENERATED_BODY()
public:
	virtual FOnPostPlayerTravel& GetPostPlayerTravel() = 0;
};
