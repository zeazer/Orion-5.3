// Fill out your copyright notice in the Description page of Project Settings.


#include "OrionAICharacter.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AOrionAICharacter::AOrionAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOrionAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOrionAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOrionAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector2D AOrionAICharacter::GetScreenPosition() const
{
	if (const auto PlayerController = Cast<APlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		FVector2D ScreenLocation;
		PlayerController->ProjectWorldLocationToScreen(GetActorLocation(), ScreenLocation);
		return ScreenLocation;
	}
	return FVector2D::ZeroVector;
}

