// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SceneCubeRotator.generated.h"

#ifdef __INTELLISENSE__
#pragma diag_suppress 102
#endif

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CTEST_API USceneCubeRotator : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USceneCubeRotator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Movement")
	float PitchValue;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Movement")
	float YawValue;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Movement")
	float RollValue;
		
};