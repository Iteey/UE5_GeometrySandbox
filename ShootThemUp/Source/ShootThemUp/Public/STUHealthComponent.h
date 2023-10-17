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
	// Sets default values for this component's properties
	USTUHealthComponent();

	float GetHealth() const
    {
        return Health;
    }
    UFUNCTION(BlueprintCallable)
    bool IsDead();
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

		
};
