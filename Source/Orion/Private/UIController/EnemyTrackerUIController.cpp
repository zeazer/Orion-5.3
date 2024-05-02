// Fill out your copyright notice in the Description page of Project Settings.


#include "UIController/EnemyTrackerUIController.h"
#include "OrionEnemyAICharacter.h"
#include "UI/Widgets/OrionViewControllerWidget.h"

void UEnemyTrackerUIController::OnUpdate(UObject* Model)
{
	Super::OnUpdate(Model);

	if (auto Enemy = Cast<AOrionEnemyAICharacter>(Model))
	{
		auto& EnemyData = TrackedEnemies.FindOrAdd(Cast<AActor>(Model), FTrackedEnemy());
		EnemyData.Health = Enemy->GetHealth();
		EnemyData.Position = Enemy->GetActorLocation();

		TArray<FTrackedEnemy> Enemies;
		TrackedEnemies.GenerateValueArray(Enemies);
		if (OrionViewController->GetActiveView())
		{
			IUIEnemyTracker::Execute_SetTrackedEnemies(OrionViewController->GetActiveView(), Enemies);
		}
	}
}
