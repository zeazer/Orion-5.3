// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionCharacter.h"

#include "OrionBlueprintFunctionLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Controllers/OrionUIControllerBase.h"
#include "OrionEnemyAICharacter.h"
#include "DrawDebugHelpers.h"
#include "Blueprint/WidgetLayoutLibrary.h"

AOrionCharacter::AOrionCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AOrionCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AOrionCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AOrionCharacter::DecrementHealth_Implementation()
{
	--Health;
	if (Health < 0.f)
	{
		Health = 0.f;
	}
}

void AOrionCharacter::IncrementHealth_Implementation()
{
	++Health;
	if (Health > MaxHealth)
	{
		Health = MaxHealth;
	}
}



FVector2D AOrionCharacter::GetMousePosition()
{
	if (const auto PlayerController = Cast<APlayerController>(GetController()))
	{
		FVector2D MousePos;
		PlayerController->GetMousePosition(MousePos.X, MousePos.Y);
		return MousePos;
	}
	return FVector2D::ZeroVector;
}
