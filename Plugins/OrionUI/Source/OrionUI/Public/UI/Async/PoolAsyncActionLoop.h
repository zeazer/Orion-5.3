// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UI/Widgets/OrionUserWidget.h"
#include "PoolAsyncActionLoop.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPoolLoopOutputPin,UOrionUserWidget*,OrionUserWidget, int32, IndexCount);
/**
 * 
 */
UCLASS()
class ORIONUI_API UPoolAsyncActionLoop : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
 
	UPROPERTY(BlueprintAssignable, Category="OrionUIAsynch")
	FPoolLoopOutputPin Completed;

	TSoftClassPtr<UOrionUserWidget> PoolWidget;
	int32 Count;

	UPROPERTY()
	TSubclassOf<UOrionUserWidget> ResultingWidgetClass;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", MetaClass = "/Script/UMG.UserWidget"), Category="OrionUIAsynch")
	static UPoolAsyncActionLoop* PoolLoopAsyncNode(const UObject* WorldContextObject, TSoftClassPtr<UOrionUserWidget> PoolWidget, int32 Count = 1);
	
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
