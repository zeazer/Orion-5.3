#pragma once
#include "CoreMinimal.h"
#include "OrionTooltipSettingStyle.generated.h"

UENUM(BlueprintType)
enum class EToolTipMode
{
	Hover,
	LeftClick,
	RightClick,
	MiddleClick
};

UCLASS(BlueprintType, Blueprintable, EditInlineNew, CollapseCategories)
class ORIONUI_API UOrionTooltipSettingStyle : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	float TooltipDelay = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	EToolTipMode ToolTipMode = EToolTipMode::Hover;
};