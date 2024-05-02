// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "Interfaces/IUIOrionRichTextBlock.h"
#include "OrionRichTextBlock.generated.h"

/**
 * 
 */
UCLASS()
class ORIONUI_API UOrionRichTextBlock : public UCommonRichTextBlock, public IUIOrionRichTextBlock
{
	GENERATED_BODY()
public:
	virtual UObject* GetToolTipWidget();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* CascadeTooltipWidget;
};
