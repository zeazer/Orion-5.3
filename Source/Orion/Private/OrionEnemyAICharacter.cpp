// Fill out your copyright notice in the Description page of Project Settings.


#include "OrionEnemyAICharacter.h"

#include "UI/Model/OrionUIModelComponent.h"
#include "UIController/EnemyTrackerUIController.h"

AOrionEnemyAICharacter::AOrionEnemyAICharacter()
{
		OverHeadHealthDisplayComponent = CreateDefaultSubobject<UOrionUIModelComponent>(TEXT("OverHeadHealthDisplayComponent"));
    	OverHeadHealthDisplayComponent->UIControllerClass = UEnemyTrackerUIController::StaticClass();
}

void AOrionEnemyAICharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	OverHeadHealthDisplayComponent->Update();
}
