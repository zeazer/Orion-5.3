#pragma once
#include "CoreMinimal.h"
#include "OrionMenuStyle.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew, CollapseCategories)
class ORIONUI_API UOrionMenuStyle : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	bool bDisablePlayerInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	bool bHideAll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI", meta = (Tooltip = "If false this widget will not be hidden by other widgets using 'bHideAll'"))
	bool bCanBeHiddenByOtherWidgets = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	bool bAllowGenericClosing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	bool bPlayOpenSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	bool bShowCursor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrionUI")
	bool bPauseGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OrionUI")
	TSoftObjectPtr<UTexture2D> BackgroundImage;
};
