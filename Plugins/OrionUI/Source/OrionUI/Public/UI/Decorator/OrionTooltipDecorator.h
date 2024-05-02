#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "OrionTooltipDecorator.generated.h"

class UOrionTooltipDecorator;

class FOrionTooltipDecorator : public FRichTextDecorator
{
public:
	FOrionTooltipDecorator(URichTextBlock* InOwner, UOrionTooltipDecorator* decorator);
	virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override;
	mutable FString IdString;
	mutable int IdPosition;

	URichTextBlock* GetOwner();
protected:
	virtual TSharedPtr<SWidget> CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const override;
	FHyperlinkStyle Linkstyle;
	FSimpleDelegate ClickedDelegate;
};
//////////////////////////////////////////////////////////////////////////

UCLASS()
class ORIONUI_API UOrionTooltipDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()
public:
	UOrionTooltipDecorator(const FObjectInitializer& ObjectInitializer);

	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;

	FOrionTooltipDecorator* FDecorator;
	UPROPERTY(EditAnywhere, Category = Appearance)
	FHyperlinkStyle style;
	
	UFUNCTION(BlueprintNativeEvent)
	void CascadeClicked();
};