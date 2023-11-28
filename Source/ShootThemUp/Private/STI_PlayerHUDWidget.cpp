// Shoot Them Up Game, All Rights Reserved


#include "STI_PlayerHUDWidget.h"
#include "STUHealthComponent.h"
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

USTUWeaponComponent* USTI_PlayerHUDWidget::GetWeaponComponent() const
{
    return nullptr;
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

