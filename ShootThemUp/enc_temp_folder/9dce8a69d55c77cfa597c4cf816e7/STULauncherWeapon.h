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
    virtual float GetCurrentAmmoType() override;
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<TSubclassOf<ASTUProjectile>> LauncherAmmoTypes;

     int32 CurrentTypeIndex = 0;
    int32 LauncherAmmoTypesLength;

  protected: 
    UPROPERTY()
    TArray<ASTUProjectile*> AmmoTypes;
	  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    //TSubclassOf<ASTUProjectile> ProjectileClass = LauncherAmmoTypes[0];
    TSubclassOf<ASTUProjectile> ProjectileClass;
	  virtual void MakeShot() override;
};
