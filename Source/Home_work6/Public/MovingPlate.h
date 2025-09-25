#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlate.generated.h"

UCLASS()
class HOME_WORK6_API AMovingPlate : public AActor
{
	GENERATED_BODY()
	
public:	

	AMovingPlate();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovingPlate|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovingPlate|Components")
	UStaticMeshComponent* StaticMeshComp;

	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MovingPlate|Properties")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MovingPlate|Properties")
	float MaxRange;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MovingPlate|Properties")
	float Distance;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MovingPlate|Properties")
	int Direction;
};
