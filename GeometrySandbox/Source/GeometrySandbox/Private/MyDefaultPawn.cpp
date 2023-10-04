// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDefaultPawn.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPawn, All, All)
// Sets default values
AMyDefaultPawn::AMyDefaultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMeshComponent->SetupAttachment(GetRootComponent());
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(GetRootComponent());

}

void AMyDefaultPawn::PossessedBy(AController* NewController)
{
}

void AMyDefaultPawn::UnPossessed()
{
}

// Called when the game starts or when spawned
void AMyDefaultPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDefaultPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!VelocityVector.IsZero())
	{
		const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
		SetActorLocation(NewLocation);
	}

}

// Called to bind functionality to input
void AMyDefaultPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyDefaultPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyDefaultPawn::MoveRight);

}

void AMyDefaultPawn::MoveForward(float Amount)
{
	//UE_LOG(LogSandboxPawn, Warning, TEXT("MOVE FORWARD %f"), Amount);
	VelocityVector.X = Amount;
}

void AMyDefaultPawn::MoveRight(float Amount)
{
	//UE_LOG(LogSandboxPawn, Warning, TEXT("MOVE RIGHT %f"), Amount);
	VelocityVector.Y = Amount;
}

 