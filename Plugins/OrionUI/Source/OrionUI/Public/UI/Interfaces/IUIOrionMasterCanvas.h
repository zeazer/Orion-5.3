// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UI/Widgets/OrionMenuWidget.h"
#include "IUIOrionMasterCanvas.generated.h"

UINTERFACE(MinimalAPI)
class UUIOrionMasterCanvas : public UInterface
{
	GENERATED_BODY()
};

class ORIONUI_API IUIOrionMasterCanvas
{
	GENERATED_BODY()

public:

	virtual void PushMenuWidget(class TSubclassOf<UOrionMenuWidget> MenuWidget, TFunctionRef<void(UOrionMenuWidget&)> InstanceInitFunc);
	virtual void PopMenuWidget(class UOrionMenuWidget* MenuWidget);
	virtual void ClearMenuScreen();
	virtual class UOrionMenuWidget* GetActiveMenuWidget();
	
};

inline void IUIOrionMasterCanvas::PushMenuWidget(TSubclassOf<UOrionMenuWidget> MenuWidget, TFunctionRef<void(UOrionMenuWidget&)> InstanceInitFunc)
{
}

inline void IUIOrionMasterCanvas::PopMenuWidget(UOrionMenuWidget* MenuWidget)
{
}

inline void IUIOrionMasterCanvas::ClearMenuScreen()
{
}

inline UOrionMenuWidget* IUIOrionMasterCanvas::GetActiveMenuWidget()
{
	return nullptr;
}
