// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "IUIEnemyTracker.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UUIEnemyTracker : public UInterface
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct ORION_API FTrackedEnemy
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category="OrionUI")
	FVector Position;
	UPROPERTY(BlueprintReadOnly, Category="OrionUI")
	float Health;
};

class ORION_API IUIEnemyTracker
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent, Category="Orion")
	void SetTrackedEnemies(const TArray<FTrackedEnemy>& TrackedEnemies);
};
