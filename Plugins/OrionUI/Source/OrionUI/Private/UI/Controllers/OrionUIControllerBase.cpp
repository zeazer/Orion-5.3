#include "UI/Controllers/OrionUIControllerBase.h"

#include "UI/Widgets/OrionViewControllerWidget.h"


void UOrionUIControllerBase::RegisterWidget(UOrionViewControllerWidget* ViewController)
{
	OrionViewController = ViewController;
}

void UOrionUIControllerBase::BlueprintUpdate(UObject* DataObject)
{
	Update(DataObject);
}

UWidget* UOrionUIControllerBase::GetActiveView()
{
	return OrionViewController->GetActiveView();
}

