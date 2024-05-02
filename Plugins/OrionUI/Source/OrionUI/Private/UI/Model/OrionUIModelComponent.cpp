// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Model/OrionUIModelComponent.h"

#include "UI/OrionHUD.h"
#include "UI/Controllers/OrionUIControllerBase.h"

// Sets default values for this component's properties
UOrionUIModelComponent::UOrionUIModelComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOrionUIModelComponent::BeginPlay()
{
	Super::BeginPlay();

	Update();
}

void UOrionUIModelComponent::TryGetController()
{
	if (const auto HUD = Cast<AOrionHUD>(GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		UIController = HUD->GetUIController(UIControllerClass);
	}
}

void UOrionUIModelComponent::RegisterUIController(UObject* WorldContextObject, UOrionUIControllerBase* InUIController)
{
	UIController = InUIController;
}

void UOrionUIModelComponent::Update()
{
	if (UIController)
	{
		UIController->OnUpdate(GetOwner());
	}
	else
	{
		TryGetController();
		if (UIController)
		{
			UIController->OnUpdate(GetOwner());
		}
	}
}
