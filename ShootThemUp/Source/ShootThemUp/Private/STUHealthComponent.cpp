// Shoot Them Up Game, All Rights Reserved


#include "STUHealthComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "TimerManager.h"
// Sets default values for this component's properties
USTUHealthComponent::USTUHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


bool USTUHealthComponent::IsDead()
{
    {
        if (Health <= 0 && DieOnce != true)
        {
            return true;
        }
    }
    return false;
}

// Called when the game starts
void USTUHealthComponent::BeginPlay()
{
	Super::BeginPlay();
    
	Health = MaxHealth;
    AActor* ComponentOwner = GetOwner();
	if (ComponentOwner)
	{
        ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &USTUHealthComponent::OnTakeAnyDamage);
        
	}
	
}

void USTUHealthComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
                                              AController* InstigatedBy, AActor* DamageCauser)
{
    if (Damage <= 0.0f || IsDead() || !GetWorld())
        return;
    GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);
    Health -= Damage;
    if (IsDead())
    {
        OnDeath.Broadcast();
    }
    else if (AutoHeal && GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(HealTimerHandle, this, &USTUHealthComponent::HealUpdate, HealUpdateTime,true, HealDelay);
    }
    
    //UE_LOG(LogTemp, Warning, TEXT("CURRENT CURRENT HEALTH %f"), Health);
}

void USTUHealthComponent::HealUpdate()
{
    Health = FMath::Min(Health + HealModifier, MaxHealth);

    if (Health == MaxHealth && GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);
    }
}


