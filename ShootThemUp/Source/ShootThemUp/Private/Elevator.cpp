// Shoot Them Up Game, All Rights Reserved

#include "Components/BoxComponent.h"
#include "Elevator.h"

// Sets default values
AElevator::AElevator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	PrimaryActorTick.bCanEverTick = true;
    BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
    RootComponent = BaseMesh;
    BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::BeginOverlap);

}

// Called when the game starts or when spawned
void AElevator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElevator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AElevator::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                             const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("HELO"));
}

