// Shoot Them Up Game, All Rights Reserved


#include "STUHealthPickup.h"
#include "STUUtils.h"
#include "STUHealthComponent.h"
bool ASTUHealthPickup::GivePickupTo(APawn* PlayerPawn)
{
    if(!PlayerPawn)
        return bool();
    const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(PlayerPawn);
    if (!HealthComponent)
        return false;
    if (HealthComponent->HealthIsMaxHealth()) return false;

    HealthComponent->AddHealth(HealthAmount);
    return true;
}
