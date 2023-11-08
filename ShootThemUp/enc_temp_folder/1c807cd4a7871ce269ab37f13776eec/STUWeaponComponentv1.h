// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUWeaponComponentv1.generated.h"

class ASTUBaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTTHEMUP_API USTUWeaponComponentv1 : public UActorComponent
{
	GENERATED_BODY()

public:
    USTUWeaponComponentv1();
    void NextWeapon();
    virtual void StartFire();
    virtual void StopFire();
    void WeaponFirst();
    void WeaponSecond();
    void WeaponThird();
    bool CanShootNow = true;
    virtual void AimPressed();
    virtual void AimReleased();
    UPROPERTY()
    ASTUBaseWeapon* CurrentWeapon = nullptr;
    
  protected:
    

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<TSubclassOf<ASTUBaseWeapon>> WeaponClasses;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponEquipSocketName = "WeaponSocket";

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponArmorySocketName = "ArmorySocket";
  
    virtual void BeginPlay() override;
  
  private:

    UPROPERTY()
    TArray<ASTUBaseWeapon*> Weapons;

    int32 CurrentWeaponIndex = 0;

    void SpawnWeapons();

    void AttachWeaponToSocket(ASTUBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName);

    void EquipWeapon(int32 WeaponIndex);


		
};
