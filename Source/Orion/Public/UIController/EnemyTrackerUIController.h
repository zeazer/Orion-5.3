// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Controllers/OrionUIControllerBase.h"
#include "UIInterface/IUIEnemyTracker.h"
#include "EnemyTrackerUIController.generated.h"

/**
 * 
 */
UCLASS()
class ORION_API UEnemyTrackerUIController : public UOrionUIControllerBase
{
	GENERATED_BODY()

public:
	virtual void OnUpdate(UObject* Model);

private:
	UPROPERTY()
	TMap<AActor*, FTrackedEnemy> TrackedEnemies;
};
