// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UI/Widgets/OrionUserWidget.h"
#include "PoolAsyncAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPoolOutputPin,UCommonUserWidget*,OrionUserWidget);
/**
 * 
 */
UCLASS()
class ORIONUI_API UPoolAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
 
	UPROPERTY(BlueprintAssignable, Category = "OrionUIAsynch")
	FPoolOutputPin Completed;

	TSoftClassPtr<UCommonUserWidget> PoolWidget;

	UPROPERTY()
	TSubclassOf<UCommonUserWidget> ResultingWidgetClass;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", MetaClass = "/Script/UMG.UCommonUserWidget"), Category = "OrionUIAsynch")
	static UPoolAsyncAction* PoolAsyncNode(const UObject* WorldContextObject, TSoftClassPtr<UCommonUserWidget> PoolWidget);
	
	virtual void Activate() override;

private:
	UFUNCTION()
	void InternalTick();
	
	UFUNCTION()
	void InternalCompleted();

	bool bActive;

	UPROPERTY()
	const UObject* WorldContextObject;

	FTimerHandle TimerHandle;
};
