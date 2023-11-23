// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUWeaponComponentv1.generated.h"

class ASTUBaseWeapon;
USTRUCT(BlueprintType)
struct FWeaponData
{
    GENERATED_USTRUCT_BODY();

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    TSubclassOf<ASTUBaseWeapon> WeaponClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    UAnimMontage* ReloadAnimMontage;
};
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
     template <typename T> T* FindNotifyByClass(UAnimSequenceBase* Animation)
     {
         if (!Animation)
             return nullptr;
         const auto NotifyEvents = Animation->Notifies;

         for (auto NotifyEvent : NotifyEvents)
         {
             auto AnimNotify = Cast<T>(NotifyEvent.Notify);
             if (AnimNotify)
             {
                 return AnimNotify;
             }
         }
         return nullptr;
     }


		
};
