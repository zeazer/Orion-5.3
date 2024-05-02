// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrionUserWidget.h"
#include "OrionSettings.h"
#include "UI/Structs/ViewData.h"
#include "OrionViewControllerWidget.generated.h"

UENUM(BlueprintType)
enum class EViewDataMode
{
	ViewData,
	DataTable
};

class UOrionUIControllerBase;

UCLASS()
class ORIONUI_API UOrionViewControllerWidget : public UOrionUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativePreConstruct() override;

	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintCallable)
	void ForceUpdate();

	UFUNCTION(BlueprintPure)
	UWidget* GetActiveView();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI")
	TSubclassOf<UOrionUIControllerBase> UIControllerClass;

	UPROPERTY()
	class UOrionUIControllerBase* UIControllerInstance;

	UPROPERTY(BlueprintReadOnly, Category="OrionUI", meta=(BindWidget))
	class UCanvasPanel* Canvas;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="OrionUI")
	TMap<TEnumAsByte<EViewType>, TSoftClassPtr<UCommonUserWidget>> PlatformViewClasses;

	UPROPERTY(BlueprintReadOnly)
	UCommonUserWidget* ViewInstance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="OrionUI")
	TSoftClassPtr<UCommonUserWidget> DebugViewClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI")
	EViewDataMode ViewDataMode = EViewDataMode::ViewData;
	
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category="OrionUI", meta=(EditCondition="ViewDataMode == EViewDataMode::ViewData"))
	class UViewData* ViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI", meta=(EditCondition="ViewDataMode == EViewDataMode::DataTable"))
	class UDataTable* ViewDataTable;

private:
	void UpdateView(const TSoftClassPtr<UCommonUserWidget>& View);

	void OnUpdateView(UObject* Obj, FPropertyChangedEvent& ChangeEvent);

	UFUNCTION()
	void OnLoadComplete();

	bool bInitialized = false;

	TSoftClassPtr<UCommonUserWidget> ActiveViewClass;
};
