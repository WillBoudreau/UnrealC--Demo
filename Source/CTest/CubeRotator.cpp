// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeRotator.h"

// Sets default values for this component's properties
UCubeRotator::UCubeRotator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PitchValue = 5.f;
	YawValue = 5.f;
	RollValue = 5.f;

	// ...
}


// Called when the game starts
void UCubeRotator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCubeRotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FRotator NewRotation = FRotator(PitchValue, YawValue, RollValue);

	FQuat Quatrotation = FQuat(NewRotation);
	// ...
}

