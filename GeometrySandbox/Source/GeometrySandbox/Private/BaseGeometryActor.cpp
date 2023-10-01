// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"


void ABaseGeometryActor::printTypes()
{
	UE_LOG(LogTemp, Warning, TEXT("==================LOGS=================="));
	UE_LOG(LogTemp, Warning, TEXT("Weapons num: %d, kills num: %i"), WeaponNum, KillsNum);
	UE_LOG(LogTemp, Warning, TEXT("Health %f"), Health);
	UE_LOG(LogTemp, Warning, TEXT("IsDead:%d"), IsDead);
	UE_LOG(LogTemp, Warning, TEXT("HasWeapon:%d"), HasWeapon);
}

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	SetRootComponent(BaseMesh);


}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();
	printTypes();
	FTransform Transform = GetActorTransform();
	FVector Location = Transform.GetLocation();
	FRotator Rotation = Transform.Rotator();
	FVector Scale = Transform.GetScale3D();
	InitialLocation = GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("Actor name %s"), *GetName());
	UE_LOG(LogTemp, Warning, TEXT("Transform %s"), *Transform.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Location %s"), *Location.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Rotation %s"), *Rotation.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Scale %s"), *Scale.ToString());




}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	switch (GeometryData.MoveType)
	{
	case EMovementType::Sin:
		{
			//FORMULA Z=Z0+APLITUDE * SIN (FREQ * T);
			//BOUNCING START
			FVector CurrentLocation = GetActorLocation();
			float time = GetWorld()->GetTimeSeconds();
			CurrentLocation.Z = InitialLocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * time);
			SetActorLocation(CurrentLocation);
			//BOUNCING END
		}
		break;
		case EMovementType::Static: break;
		default:break;
	}
}

