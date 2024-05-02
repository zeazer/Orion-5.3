// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionGameMode.h"
#include "OrionPlayerController.h"
#include "OrionCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/HUD.h"


AOrionGameMode::AOrionGameMode()
{
	if (OrionPawnClass != nullptr)
	{
		DefaultPawnClass = OrionPawnClass;
	}

	if (OrionControllerClass != nullptr)
	{
		PlayerControllerClass = OrionControllerClass;
	}
	if (OrionHUDClass != nullptr)
	{
		HUDClass = OrionHUDClass;
	}
}