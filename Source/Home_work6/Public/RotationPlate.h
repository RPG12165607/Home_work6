#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotationPlate.generated.h"

UCLASS()
class HOME_WORK6_API ARotationPlate : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotationPlate();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RotationPlate|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RotationPlate|Components")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RotationPlate|Properties")
	float RotationSpeed;
};
