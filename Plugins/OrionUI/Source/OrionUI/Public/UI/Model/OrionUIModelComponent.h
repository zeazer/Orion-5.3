// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UI/Widgets/OrionViewControllerWidget.h"
#include "OrionUIModelComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ORIONUI_API UOrionUIModelComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UOrionUIModelComponent();

	TSubclassOf<UOrionUIControllerBase> UIControllerClass;
protected:
	virtual void BeginPlay() override;

	void TryGetController();

	UPROPERTY()
	UOrionUIControllerBase* UIController;

public:

	void RegisterUIController(UObject* WorldContextObject, class UOrionUIControllerBase* InUIController);

	UFUNCTION(BlueprintCallable)
	void Update();
};
