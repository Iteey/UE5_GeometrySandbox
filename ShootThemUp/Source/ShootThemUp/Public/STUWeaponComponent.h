// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STUWeaponComponent.generated.h"

class ASTUBaseWeapon;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SHOOTTHEMUP_API ASTUWeaponComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	ASTUWeaponComponent();

	virtual void Fire();

protected:

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<ASTUBaseWeapon> WeaponClass;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponAttachPointName = "WeaponSocket";

	virtual void BeginPlay() override;

	private:
    UPROPERTY()
    ASTUBaseWeapon* CurrentWeapon = nullptr;

	void SpawnWeapon();

};
