// Shoot Them Up Game, All Rights Reserved


#include "STUAmmoPickup.h"
#include "STUWeaponComponentv1.h"
#include "STUHealthComponent.h"
#include "STUUtils.h"
DEFINE_LOG_CATEGORY_STATIC(LogBasePickup, All, All);
bool ASTUAmmoPickup::GivePickupTo(APawn* PlayerPawn)
{
    const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(PlayerPawn);
    if (!HealthComponent || HealthComponent->IsDead()) return false;
    const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponComponentv1>(PlayerPawn);
    if (!WeaponComponent) return true;
    return WeaponComponent->TryToAddAmmo(WeaponType, ClipsAmount);
}
