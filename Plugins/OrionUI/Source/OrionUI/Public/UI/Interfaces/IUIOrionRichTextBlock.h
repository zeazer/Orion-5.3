// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "IUIOrionRichTextBlock.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UUIOrionRichTextBlock : public UInterface
{
	GENERATED_BODY()
};

class ORIONUI_API IUIOrionRichTextBlock
{
	GENERATED_BODY()
public:
	virtual UObject* GetToolTipWidget();
};

inline UObject* IUIOrionRichTextBlock::GetToolTipWidget()
{
	return nullptr;
}
