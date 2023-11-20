// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUHealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDeath);
    UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTTHEMUP_API USTUHealthComponent : public UActorComponent
{
	GENERATED_BODY()
  public:
  protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
    bool AutoHeal = true;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
    float HealUpdateTime = 1.0f;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
    float HealDelay = 3.0f;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
    float HealModifier = 5.0f;
    FTimerHandle HealTimerHandle;

public:	
	// Sets default values for this component's properties
	USTUHealthComponent();

	UFUNCTION(BlueprintCallable)
	float GetHealth() const
    {
        return Health;
    }
    UFUNCTION(BlueprintCallable)
    float GetHealthPercent() const
    {
        return Health / MaxHealth;
    }

    UFUNCTION(BlueprintCallable)
    bool IsDead();
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DieOnce=false;
    float HealthRegeneration=0.5;
    FOnDeath OnDeath;

  protected:
	// Called when the game starts
	virtual void BeginPlay() override;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float MaxHealth = 120.0f;
  UFUNCTION()
  void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
                             class AController* InstigatedBy, AActor* DamageCauser);

private:
 
    float Health = 120.0f;
  void HealUpdate();
    
		
};
