// Shoot Them Up Game, All Rights Reserved


#include "STI_PlayerHUDWidget.h"
#include "STUHealthComponent.h"
#include "STUWeaponComponentv1.h"

float USTI_PlayerHUDWidget::GetHealthPercent() const
{

    const auto Component = GetHealthComponent();
    const auto HealthComponent = Cast<USTUHealthComponent>(Component);
    if (!HealthComponent)
        return 0.0f;
    return HealthComponent->GetHealthPercent();
}

bool USTI_PlayerHUDWidget::IsPlayerAlive() const
{

    const auto HealthComponent = GetHealthComponent();
    return HealthComponent && !HealthComponent->IsDead();
}

bool USTI_PlayerHUDWidget::IsPlayerSpectating() const
{
    const auto Controller = GetOwningPlayer();
    return Controller && Controller ->GetStateName()==NAME_Spectating;
}
bool USTI_PlayerHUDWidget::GetWeaponUIData(FWeaponUIData& UIData) const
{
    const auto Player = GetOwningPlayerPawn();
    if (!Player)
        return false;
    const auto Component = Player->GetComponentByClass(USTUWeaponComponentv1::StaticClass());
    const auto WeaponComponent = Cast<USTUWeaponComponentv1>(Component);
    if (!WeaponComponent)
        return false;

    return WeaponComponent->GetWeaponUIData(UIData);
}


USTUWeaponComponentv1* USTI_PlayerHUDWidget::GetWeaponComponent() const
{
    const auto Player = GetOwningPlayerPawn();
    if (!Player)
        return nullptr;

    const auto Component = Player->GetComponentByClass(USTUWeaponComponentv1::StaticClass());
    const auto WeaponComponent = Cast<USTUWeaponComponentv1>(Component);
    return WeaponComponent;
}

USTUHealthComponent* USTI_PlayerHUDWidget::GetHealthComponent() const
{
    const auto Player = GetOwningPlayerPawn();
    if (!Player)
        return nullptr;
    const auto Component = Player-> GetComponentByClass(USTUHealthComponent::StaticClass());
    const auto HealthComponent = Cast<USTUHealthComponent>(Component);
    return HealthComponent;
}
bool USTI_PlayerHUDWidget::GetWeaponAmmoData(FAmmoData& AmmoData) const
{
    const auto WeaponComponent = GetWeaponComponent();
    if (!WeaponComponent)
        return false;

    return WeaponComponent->GetWeaponAmmoData(AmmoData);
}

