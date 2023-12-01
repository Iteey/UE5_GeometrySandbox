// Shoot Them Up Game, All Rights Reserved


#include "STUAmmoPickup.h"
DEFINE_LOG_CATEGORY_STATIC(LogBasePickup, All, All);
bool ASTUAmmoPickup::GivePickupTo(APawn* PlayerPawn)
{
    UE_LOG(LogBasePickup, Display, TEXT("Ammo was taken"))
    return true;
}
