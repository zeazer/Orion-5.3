#pragma once
#include "CoreMinimal.h"
#include "UI/Widgets/OrionTooltipWidget.h"
#include "OrionCascadeStyle.h"
#include "OrionTooltipStyle.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew, CollapseCategories)
class ORIONUI_API UOrionTooltipStyle : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine="true"), Category = "OrionUI")
	FText ToolTipTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine="true"), Category = "OrionUI")
	FText TooltipDescriptionText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	TMap<FString, TSubclassOf<UOrionTooltipWidget>> TooltipCascadeID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	TMap<FString, FAnchors> TooltipCascadeAnchors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI")
	TSoftObjectPtr<UTexture2D> TooltipBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI")
	TSoftObjectPtr<UTexture2D> TooltipIconImage;
};