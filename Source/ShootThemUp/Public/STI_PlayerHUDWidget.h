// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUCoreTypes.h"
#include "STI_PlayerHUDWidget.generated.h"


/**
 * 
 */
class USTUBaseWeapon;
class USTUWeaponComponentv1;
class USTUHealthComponent;
UCLASS()
class SHOOTTHEMUP_API USTI_PlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

	public:
    UFUNCTION(BlueprintCallable, Category = "UI")
      float GetHealthPercent() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
      bool IsPlayerAlive() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
      bool IsPlayerSpectating() const;

    UFUNCTION(BlueprintCallable, Category = "UI")
      bool GetWeaponUIData(FWeaponUIData& AmmoData) const;

    UFUNCTION(BlueprintCallable, Category = "UI")
      bool GetWeaponAmmoData(FAmmoData& AmmoData) const;

  private:
    USTUWeaponComponentv1* GetWeaponComponent() const;
    USTUHealthComponent* GetHealthComponent() const;

	
};
