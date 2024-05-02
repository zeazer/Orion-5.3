// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OrionAICharacter.generated.h"

UCLASS()
class ORION_API AOrionAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOrionAICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float GetHealth() { return Health/MaxHealth; }
	
	FVector2D GetScreenPosition() const;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OrionAICharacter)
	FText CharacterDisplayname;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OrionAICharacter)
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OrionAICharacter)
	float MaxHealth;
};
