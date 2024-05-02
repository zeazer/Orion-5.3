#include "UI/Decorator/OrionTooltipDecorator.h"

#include "Components/RichTextBlock.h"
#include "Components/RichTextBlockDecorator.h"
#include "UI/Interfaces/IUIOrionCascadingTooltip.h"
#include "UI/Interfaces/IUIOrionRichTextBlock.h"
#include "Widgets/Input/SRichTextHyperlink.h"


UOrionTooltipDecorator::UOrionTooltipDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

FOrionTooltipDecorator::FOrionTooltipDecorator(URichTextBlock* InOwner, UOrionTooltipDecorator* decorator) : FRichTextDecorator(InOwner)
{
	Linkstyle = decorator->style;
	ClickedDelegate.BindLambda([=]()
	{
		decorator->CascadeClicked();
	});
}

bool FOrionTooltipDecorator::Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const
{
	if (RunParseResult.Name == TEXT("tooltip") && RunParseResult.MetaData.Contains(TEXT("id")))
	{
		const FTextRange& IdRange = RunParseResult.MetaData[TEXT("id")];
		IdString = Text.Mid(IdRange.BeginIndex, IdRange.EndIndex - IdRange.BeginIndex);
		return true;
	}

	return false;
}

URichTextBlock* FOrionTooltipDecorator::GetOwner()
{
	return Owner;
}

TSharedPtr<SWidget> FOrionTooltipDecorator::CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const
{
	TSharedPtr<FSlateHyperlinkRun::FWidgetViewModel> model = MakeShareable(new FSlateHyperlinkRun::FWidgetViewModel);

	TSharedPtr<SRichTextHyperlink> link = SNew(SRichTextHyperlink, model.ToSharedRef()).Text(FText::FromString(IdString)).Style(&Linkstyle).OnNavigate(ClickedDelegate);

	return link;
}

//////////////////////////////////////////////////////////////////////////

TSharedPtr<ITextDecorator> UOrionTooltipDecorator::CreateDecorator(URichTextBlock* InOwner)
{
	FDecorator = new FOrionTooltipDecorator(InOwner, this);
	return MakeShareable(FDecorator);
}

void UOrionTooltipDecorator::CascadeClicked_Implementation()
{
	if (const auto IRichTextBlock = Cast<IUIOrionRichTextBlock>(FDecorator->GetOwner()))
	{
		if (const auto Cascade = Cast<IUIOrionCascadingTooltip>(IRichTextBlock->GetToolTipWidget()))
		{
			Cascade->TooltipHoverComplete(FDecorator->IdString);
		}
	}
}
