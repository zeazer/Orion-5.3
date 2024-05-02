// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OrionCharacter.generated.h"

UCLASS(Blueprintable)
class AOrionCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AOrionCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintNativeEvent)
	void IncrementHealth();
	UFUNCTION(BlueprintNativeEvent)
	void DecrementHealth();

	float GetHealth() { return Health; }
	float GetMaxHealth() { return MaxHealth; }

	FVector2D GetMousePosition();

private:
	class UOrionHealthComponent* HealthComponent;
	
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	float Health = 80.f;
	float MaxHealth = 100.f;
};
