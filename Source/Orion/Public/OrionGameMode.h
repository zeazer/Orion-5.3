// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OrionGameMode.generated.h"

UCLASS(minimalapi)
class AOrionGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AOrionGameMode();

	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = Orion)
	TSubclassOf<class APlayerController> OrionControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Orion)
	TSubclassOf<class AHUD> OrionHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Orion)
	TSubclassOf<class APawn> OrionPawnClass;
};



