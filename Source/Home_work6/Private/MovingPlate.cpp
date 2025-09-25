#include "MovingPlate.h"


AMovingPlate::AMovingPlate()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	MoveSpeed = 200.0f;
	MaxRange = 400.0f;
	Distance = 0.0f;
}

void AMovingPlate::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	Direction = 1;
}

void AMovingPlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NowLocation = GetActorLocation();
	Distance += MoveSpeed * DeltaTime * Direction;
	if (Distance > MaxRange)
	{
		Distance = MaxRange;
		Direction *= -1;
	}
	else if (Distance < 0.f)
	{
		Distance = 0.f;
		Direction *= -1;
	}
	FVector NewLocation = StartLocation + FVector(Distance, 0.f, 0.f);
	SetActorLocation(NewLocation);
}

