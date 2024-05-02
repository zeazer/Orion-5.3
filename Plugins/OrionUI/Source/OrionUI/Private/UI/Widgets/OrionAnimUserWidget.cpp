// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widgets/OrionAnimUserWidget.h"
#include "Animation/WidgetAnimation.h"

void UOrionAnimUserWidget::AnimFunction_Implementation(EOrionAnimMode AnimMode)
{
	switch (AnimMode)
	{
	case EOrionAnimMode::InAnim:
		if (AnimateIn)
		{
			const float StartTime = AnimateOut ? AnimateOut->GetEndTime() - PauseAnimation(AnimateOut) : 0.f;
			PlayAnimation(AnimateIn, StartTime);
		}
		break;
	case EOrionAnimMode::OutAnim:
		if (AnimateOut)
		{
			const float StartTime = AnimateIn ? AnimateIn->GetEndTime() - PauseAnimation(AnimateIn) : 0.f;
			PlayAnimation(AnimateOut, StartTime);
		}
		break;
	}
}
