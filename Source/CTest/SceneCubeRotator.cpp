
#include "SceneCubeRotator.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
USceneCubeRotator::USceneCubeRotator()
{
	PrimaryComponentTick.bCanEverTick = true;
	PitchValue = 5.f;
	YawValue = 5.f;
	RollValue = 5.f;

	// Assuming you have a reference to the StaticMeshComponent
	UStaticMeshComponent* StaticMeshComponent = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
	if (StaticMeshComponent)
	{
		StaticMeshComponent->SetMobility(EComponentMobility::Movable);
	}
}

// Called when the game starts
void USceneCubeRotator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void USceneCubeRotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FRotator NewRotation = FRotator(PitchValue * DeltaTime, YawValue * DeltaTime, RollValue * DeltaTime);
	FQuat QuatRotation = FQuat(NewRotation);

	AddLocalRotation(QuatRotation,false,0,ETeleportType::None);
}