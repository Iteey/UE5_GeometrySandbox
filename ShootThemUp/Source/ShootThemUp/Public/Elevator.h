// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Elevator.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
UCLASS()
class SHOOTTHEMUP_API AElevator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElevator();

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* BaseMesh;

protected:
    UPROPERTY(EditAnywhere, Category = "Components")
    UBoxComponent* BoxComponent;

  protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
