// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BaseGeometryActor.generated.h"

UENUM(BlueprintType)
enum class EMovementType : uint8
{
	Sin,
	Static,
};

USTRUCT(BlueprintType)
struct FGeometryData 
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	float Amplitude = 50.0f;

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	float Frequency = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	EMovementType MoveType = EMovementType::Static;

	UPROPERTY(EditAnywhere, Category = "Design")
	FLinearColor ColorDefault = FLinearColor::Yellow;

	UPROPERTY(EditAnywhere, Category = "Timer")
	float TimerRate = 3.0f;

	UPROPERTY(EditAnywhere, Category = "Timer")
	bool TimerEnable = false;
};

UCLASS()
class GEOMETRYSANDBOX_API ABaseGeometryActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseGeometryActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, Category = "Geometry Data")
	FGeometryData GeometryData;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	int32 WeaponNum = 4;

	UPROPERTY(EditDefaultsOnly, Category = "stat")
	int32 KillsNum = 7;

	UPROPERTY(EditInstanceOnly, Category = "Health")
	float Health = 34.43f;

	UPROPERTY(EditAnywhere, Category = "Health")
	bool IsDead = false;

	UPROPERTY(VisibleAnywhere, Category = "weapon")
	bool HasWeapon = true;









public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector InitialLocation;
	void printTypes();
	FTimerHandle TimerHandle;
	void SetColor(const FLinearColor& Color);

	void OnTimerFired();

};
