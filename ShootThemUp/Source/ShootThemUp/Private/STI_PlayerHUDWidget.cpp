// Shoot Them Up Game, All Rights Reserved


#include "STI_PlayerHUDWidget.h"
#include "STUHealthComponent.h"
float USTI_PlayerHUDWidget::GetHealthPercent() const
{
    const auto Player = GetOwningPlayerPawn();
    if (!Player)return 0.0f;
    const auto Component = Player->GetComponentByClass(USTUHealthComponent::StaticClass());
    const auto HealthComponent = Cast<USTUHealthComponent>(Component);
    if (!HealthComponent)
        return 0.0f;
    return HealthComponent->GetHealthPercent();
}
