// Shoot Them Up Game, All Rights Reserved

#include "STI_PlayerHUDWidget.h"

#include "STUHealthComponent.h"
#include "STUUtils.h"
#include "STUWeaponComponentv1.h"
float USTI_PlayerHUDWidget::GetHealthPercent() const
{
	const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(GetOwningPlayerPawn());
	if (!HealthComponent)
	{
		return 0.0f;
	}
	return HealthComponent->GetHealthPercent();
}

bool USTI_PlayerHUDWidget::IsPlayerAlive() const
{
	const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(GetOwningPlayerPawn());
	return HealthComponent && !HealthComponent->IsDead();
}

bool USTI_PlayerHUDWidget::IsPlayerSpectating() const
{
	const auto Controller = GetOwningPlayer();
	return Controller && Controller->GetStateName() == NAME_Spectating;
}
bool USTI_PlayerHUDWidget::GetWeaponUIData(FWeaponUIData& UIData) const
{
	const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponComponentv1>(GetOwningPlayerPawn());
	if (!WeaponComponent)
	{
		return false;
	}

	return WeaponComponent->GetWeaponUIData(UIData);
}

bool USTI_PlayerHUDWidget::GetWeaponAmmoData(FAmmoData& AmmoData) const
{
	const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponComponentv1>(GetOwningPlayerPawn());
	if (!WeaponComponent)
	{
		return false;
	}

	return WeaponComponent->GetWeaponAmmoData(AmmoData);
}
