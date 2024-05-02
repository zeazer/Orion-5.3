// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrionAICharacter.h"
#include "OrionEnemyAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class ORION_API AOrionEnemyAICharacter : public AOrionAICharacter
{
	GENERATED_BODY()
public:
	AOrionEnemyAICharacter();

	virtual void Tick(float DeltaSeconds) override;

private:
	class UOrionUIModelComponent* OverHeadHealthDisplayComponent;
	
};
