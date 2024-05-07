// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "STUBaseWeapon.h"

#include "STULauncherWeapon.generated.h"

class ASTUBaseCharacter;
class ASTUProjectile;
/**
 *
 */
UCLASS()
class SHOOTTHEMUP_API ASTULauncherWeapon : public ASTUBaseWeapon
{
	GENERATED_BODY()
public:
	virtual void StartFire() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float LauncherZoomPlus = 20;
	virtual float GetZoomMultiplier() override;
	virtual float SwitchCurrentAmmoType() override;

	int32 CurrentAmmoType = 1;
	int32 LauncherAmmoTypesLength;

protected:
	TSubclassOf<ASTUProjectile> SpawnedProjectile;
	UPROPERTY()
	TArray<ASTUProjectile*> AmmoTypes;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<ASTUProjectile> ProjectileClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<ASTUProjectile> SecondProjectileClass;
	virtual void MakeShot() override;
};
