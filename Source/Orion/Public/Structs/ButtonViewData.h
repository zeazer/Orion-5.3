#pragma once
#include "CoreMinimal.h"
#include "UI/Structs/ViewData.h"
#include "ButtonViewData.generated.h"

DECLARE_DYNAMIC_DELEGATE(FOnButtonClickedEvent);

UCLASS(BlueprintType, EditInlineNew)
class ORION_API UButtonViewData : public UViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="View")
	FString Text;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Events")
	FOnButtonClickedEvent OnButtonClick;
};
