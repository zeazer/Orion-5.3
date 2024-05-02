// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrionUIControllerBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class ORIONUI_API UOrionUIControllerBase : public UObject
{
	GENERATED_BODY()
public:
	virtual void OnUpdate(UObject* Model){};

	void RegisterWidget(class UOrionViewControllerWidget* ViewController);
	void BlueprintUpdate(UObject* DataObject);

	UFUNCTION(BlueprintCallable)
	UWidget* GetActiveView();
	
protected:
	UPROPERTY()
	class UOrionViewControllerWidget* OrionViewController;

	UFUNCTION(BlueprintImplementableEvent)
	void Update(UObject* Model);
};