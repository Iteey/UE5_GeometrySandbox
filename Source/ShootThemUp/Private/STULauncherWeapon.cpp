// Shoot Them Up Game, All Rights Reserved

#include "STULauncherWeapon.h"

#include "STUBaseCharacter.h"
#include "STUProjectile.h"
void ASTULauncherWeapon::StartFire()
{
	MakeShot();
}

float ASTULauncherWeapon::GetZoomMultiplier()
{
	return LauncherZoomPlus;
}

float ASTULauncherWeapon::SwitchCurrentAmmoType()
{
	UE_LOG(LogTemp, Warning, TEXT("SWITCH"));
	CurrentAmmoType++;
	if (CurrentAmmoType >= 2)
	{
		CurrentAmmoType = 0;
	}
	return CurrentAmmoType;
}

void ASTULauncherWeapon::MakeShot()
{
	if (IsAmmoEmpty())
	{
		return;
	}

	if (CurrentAmmoType == 0)
	{
		SpawnedProjectile = ProjectileClass;
	}
	else if (CurrentAmmoType == 1)
	{
		SpawnedProjectile = SecondProjectileClass;
	}

	if (!GetWorld())
	{
		return;
	}

	FVector TraceStart, TraceEnd;

	if (!GetTraceData(TraceStart, TraceEnd))
	{
		return;
	}

	FHitResult HitResult;
	MakeHit(HitResult, TraceStart, TraceEnd);

	const FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceEnd;
	const FVector Direction = (EndPoint - GetMuzzleWorldLocation()).GetSafeNormal();
	const auto GunRotation = GetActorRotation();
	const FTransform SpawnTransform(GunRotation, GetMuzzleWorldLocation());
	ASTUProjectile* Projectile = GetWorld()->SpawnActorDeferred<ASTUProjectile>(SpawnedProjectile, SpawnTransform);
	if (Projectile)
	{
		Projectile->SetShotDirection(Direction);
		Projectile->SetOwner(GetOwner());
		Projectile->FinishSpawning(SpawnTransform);
	}
	DecreaseAmmo();
}
