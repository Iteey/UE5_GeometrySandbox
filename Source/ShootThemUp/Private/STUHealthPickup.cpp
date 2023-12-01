// Shoot Them Up Game, All Rights Reserved


#include "STUHealthPickup.h"
DEFINE_LOG_CATEGORY_STATIC(LogBasePickup, All, All);
bool ASTUHealthPickup::GivePickupTo(APawn* PlayerPawn)
{
    UE_LOG(LogBasePickup, Display, TEXT("Health was taken"))
    return true;
}
