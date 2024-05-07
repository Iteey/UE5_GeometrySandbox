// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STUCoreTypes.h"

#include "STUBaseWeapon.generated.h"

class USkeletalMeshComponent;
UCLASS()

class SHOOTTHEMUP_API ASTUBaseWeapon : public AActor
{
	GENERATED_BODY()

public:
	ASTUBaseWeapon();
	FOnClipEmptySignature OnClipEmpty;
	virtual void StartFire();
	virtual void StopFire();
	bool IsAmmoEmpty() const;
	float GetNumBullets();
	float GetNumClips();
	void ReloadAmmo();
	virtual void AimPressed();
	virtual void AimReleased();
	virtual float GetZoomMultiplier();
	void ChangeCurrentClip();
	virtual float SwitchCurrentAmmoType();

	FAmmoData GetAmmoData() const
	{
		return CurrentAmmo;
	};
	void ChangeClip();
	bool CanReload() const;

	bool TryToAddAmmo(int32 ClipsAmount);
	FWeaponUIData GetUIData() const
	{
		return UIData;
	}

protected:
	FAmmoData CurrentAmmo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
	FWeaponUIData UIData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	FName MuzzleSocketName = "MuzzleSocket";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float TraceMaxDistance = 2000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float DamageAmount = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float ZoomMultiplier = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FAmmoData DefaultAmmo = {15, 10, false};

	void DecreaseAmmo();

	bool IsClipEmpty() const;

	void LogAmmo();
	bool IsAmmoFull() const;

	void MakeDamage(const FHitResult& HitResult);
	virtual void MakeShot();
	APlayerController* GetPlayerController() const;
	bool GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const;
	virtual void BeginPlay() override;
	FVector GetMuzzleWorldLocation() const;
	virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const;
	void MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd);
};
