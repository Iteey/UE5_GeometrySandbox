// Shoot Them Up Game, All Rights Reserved


#include "STUHealthPickup.h"
#include "STUUtils.h"
#include "STUHealthComponent.h"
DEFINE_LOG_CATEGORY_STATIC(LogBasePickup, All, All);
bool ASTUHealthPickup::GivePickupTo(APawn* PlayerPawn)
{
    const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(PlayerPawn);
    if (!HealthComponent)
        return false;
    if (HealthComponent->HealthIsMaxHealth()) return false;

    HealthComponent->AddHealth(HealthAmount);
    UE_LOG(LogBasePickup, Display, TEXT("Health was taken"))
    return true;
}
