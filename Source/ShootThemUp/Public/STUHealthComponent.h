// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "STUCoreTypes.h"

#include "STUHealthComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
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
	float HealDelay = 9.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
	float HealModifier = 5.0f;
	void SetHealth(float NewHealth);
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
		// UE_LOG(LogTemp, Warning, TEXT("Current Health %f"),Health)
		return Health / MaxHealth;
	}
	bool HealthIsMaxHealth()
	{
		if (Health == MaxHealth)
		{
			return true;
		}
		return false;
	}
	void AddHealth(float AddedHealth)
	{
		if (IsDead())
		{
			return;
		}
		if (HealthIsMaxHealth())
		{
			return;
		}
		Health = Health + AddedHealth;
		SetHealth(Health);
	}
	UFUNCTION(BlueprintCallable)
	bool IsDead();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DieOnce = false;
	float HealthRegeneration = 0.5;
	FOnDeath OnDeath;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float MaxHealth;
	UFUNCTION()
	void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy,
		AActor* DamageCauser);

private:
	float Health = 0.0f;
	void HealUpdate();
};
