// Fill out your copyright notice in the Description page of Project Settings.


#include "GeometryPlayerController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MyDefaultPawn.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPlayerController, All, All)
void AGeometryPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("ChangePawn", IE_Pressed, this, &AGeometryPlayerController::ChangePawn);
}
void AGeometryPlayerController::BeginPlay() {
	Super::BeginPlay();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyDefaultPawn::StaticClass(), Pawns);
}
void AGeometryPlayerController::ChangePawn()
{
	if (Pawns.Num() <= 1) return;
	AMyDefaultPawn* CurrentPawn = Cast<AMyDefaultPawn>(Pawns[CurrentPawnIndex]);
	CurrentPawnIndex = (CurrentPawnIndex + 1) % Pawns.Num();
	Possess(CurrentPawn);
	UE_LOG(LogSandboxPlayerController, Warning, TEXT("Change player pawn"));
}
