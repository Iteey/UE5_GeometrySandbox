// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STI_PlayerHUDWidget.generated.h"


/**
 * 
 */

class USTUWeaponComponent;
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

  private:
    USTUWeaponComponent* GetWeaponComponent() const;
    USTUHealthComponent* GetHealthComponent() const;

	
};
