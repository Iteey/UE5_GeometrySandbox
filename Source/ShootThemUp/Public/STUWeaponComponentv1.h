// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUCoreTypes.h"
#include "STUWeaponComponentv1.generated.h"

class ASTUBaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTTHEMUP_API USTUWeaponComponentv1 : public UActorComponent
{
	GENERATED_BODY()

public:
    bool ReloadAnimInProgress = false;
    USTUWeaponComponentv1();
    void NextWeapon();
    virtual void StartFire();
    virtual void StopFire();
    void WeaponFirst();
    void WeaponSecond();
    void WeaponThird();
    bool CanShootNow = true;
    bool CanSwitchWeapon = true;
    virtual void AimPressed();
    virtual void AimReleased();
    void OnReloadFinished(USkeletalMeshComponent* MeshComp);
    bool CanReload();
    virtual void SwitchCurrentAmmoType();
    void Reload();
    UPROPERTY()
    ASTUBaseWeapon* CurrentWeapon = nullptr;
    UPROPERTY()
    UAnimMontage* CurrentReloadAnimMontage = nullptr;
    
    bool GetWeaponAmmoData(FAmmoData& AmmoData) const;
  protected:
    

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<FWeaponData> WeaponData;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponEquipSocketName = "WeaponSocket";

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponArmorySocketName = "ArmorySocket";

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    UAnimMontage* EquipAnimMontage;
  
    virtual void BeginPlay() override;
  
  private:

    UPROPERTY()
    TArray<ASTUBaseWeapon*> Weapons;

    int32 CurrentWeaponIndex = 0;

   private:
     void SpawnWeapons();
     void AttachWeaponToSocket(ASTUBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName);
     void EquipWeapon(int32 WeaponIndex);

     void PlayAnimMontage(UAnimMontage* Animation);
     void InitAnimations();
     void OnEquipFinished(USkeletalMeshComponent* MeshComponent);
     void OnEmptyClip();
     void ChangeClip();


		
};
