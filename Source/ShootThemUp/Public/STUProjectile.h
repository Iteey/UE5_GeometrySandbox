// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "STUProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class SHOOTTHEMUP_API ASTUProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASTUProjectile();

	void SetShotDirection(const FVector& Direction)
	{
		ShotDirection = Direction;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
	USphereComponent* CollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon")
	UProjectileMovementComponent* MovementComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
	float DamageRadius = 500.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
	float DamageAmount = 99.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
	bool DoFullDamage = false;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector ShotDirection;
	UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit);
	AController* GetController() const;
};
