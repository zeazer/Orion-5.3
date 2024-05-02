// Fill out your copyright notice in the Description page of Project Settings.


#include "NeuralNetworkActor.h"

// Sets default values
ANeuralNetworkActor::ANeuralNetworkActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANeuralNetworkActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANeuralNetworkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

