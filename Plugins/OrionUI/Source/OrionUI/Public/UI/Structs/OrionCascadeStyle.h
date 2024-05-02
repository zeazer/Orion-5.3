#pragma once
#include "CoreMinimal.h"
#include "OrionCascadeStyle.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew, CollapseCategories)
class ORIONUI_API UOrionCascadeStyle : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	class TSoftClassPtr<UFont> CascadeFont;
	
};
