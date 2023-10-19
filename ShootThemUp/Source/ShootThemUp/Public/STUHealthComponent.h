// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUHealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBpOnDeath);
    UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTTHEMUP_API USTUHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USTUHealthComponent();

	UFUNCTION(BlueprintCallable)
	float GetHealth() const
    {
        return Health;
    }
    UFUNCTION(BlueprintCallable)
    bool IsDead();
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DieOnce=false;
    float HealthRegeneration=0.5;
    FOnDeath OnDeath;
    FBpOnDeath BpOnDeath;

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
    
		
};
