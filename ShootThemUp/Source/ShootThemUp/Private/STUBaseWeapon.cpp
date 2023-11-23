// Shoot Them Up Game, All Rights Reserved

#include "STUBaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Character.h"
#include "STUBaseCharacter.h"

ASTUBaseWeapon::ASTUBaseWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    SetRootComponent(WeaponMesh);

}


void ASTUBaseWeapon::StartFire()
{

   
}
void ASTUBaseWeapon::StopFire()
{
    
}
void ASTUBaseWeapon::DecreaseAmmo()
{
    if (CurrentAmmo.Bullets == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Clip is empty"));
        return;
    }
    CurrentAmmo.Bullets--;
    LogAmmo();
    if (IsClipEmpty() && !IsAmmoEmpty())
    {
        ChangeClip();
    }
    
}
bool ASTUBaseWeapon::IsAmmoEmpty() const
{
    return !CurrentAmmo.Infinite && CurrentAmmo.Clips == 0 && IsClipEmpty();
}
bool ASTUBaseWeapon::IsClipEmpty() const
{
    return CurrentAmmo.Bullets == 0;
}
void ASTUBaseWeapon::ChangeClip()
{
    CurrentAmmo.Bullets = DefaultAmmo.Bullets;
    if (!CurrentAmmo.Infinite)
    {
        if (CurrentAmmo.Clips == 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("NO MORE CLIPS"));
            return;
        }
        CurrentAmmo.Clips--;
        OnClipEmpty.Broadcast();
    }
    UE_LOG(LogTemp, Warning, TEXT("---Change clip---"));
}
void ASTUBaseWeapon::LogAmmo()
{
    FString AmmoInfo = "Ammo: " + FString::FromInt(CurrentAmmo.Bullets) + " / ";
    AmmoInfo += CurrentAmmo.Infinite ? "Infinite" : FString::FromInt(CurrentAmmo.Clips);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *AmmoInfo);
}
bool ASTUBaseWeapon::CanReload() const
{

    return CurrentAmmo.Bullets < DefaultAmmo.Bullets && CurrentAmmo.Clips>0;
}
void ASTUBaseWeapon::MakeDamage(const FHitResult& HitResult)
{
    const auto DamagedActor = HitResult.GetActor();
    if (!DamagedActor)
        return;
    DamagedActor->TakeDamage(DamageAmount, FDamageEvent(), GetPlayerController(), this);
}


void ASTUBaseWeapon::AimPressed()
{
}

void ASTUBaseWeapon::AimReleased()
{
}

float ASTUBaseWeapon::GetZoomMultiplier()
{
    return 0.0f;
}

float ASTUBaseWeapon::SwitchCurrentAmmoType()
{
    return 0.0f;
}

void ASTUBaseWeapon::MakeShot()
{

}
APlayerController* ASTUBaseWeapon::GetPlayerController() const
{
            const auto Player = Cast<ACharacter>(GetOwner());
        if (!Player)
            return nullptr;
        return Player->GetController<APlayerController>();
}
bool ASTUBaseWeapon::GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
        const auto Controller = GetPlayerController();
        if (!Controller)
            return false;
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
        return true;
}

// Called when the game starts or when spawned
void ASTUBaseWeapon::BeginPlay()
{
	Super::BeginPlay();
    CurrentAmmo.Bullets = DefaultAmmo.Bullets;
    CurrentAmmo.Clips = DefaultAmmo.Clips;
    CurrentAmmo.Infinite = DefaultAmmo.Infinite;
    check(WeaponMesh);
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    
   
}
bool ASTUBaseWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
    FVector ViewLocation;
    FRotator ViewRotation;
    if(!GetPlayerViewPoint(ViewLocation, ViewRotation)) return false;

    TraceStart = ViewLocation; // SocketTransform.GetLocation();
    const FVector ShootDirection = ViewRotation.Vector(); // SocketTransform.GetRotation().GetForwardVector();
    TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;
    return true;
}
FVector ASTUBaseWeapon::GetMuzzleWorldLocation() const
{
    return WeaponMesh->GetSocketLocation(MuzzleSocketName);
}
void ASTUBaseWeapon::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd)
{
    if (!GetWorld()) return;
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner());

    GetWorld()->LineTraceSingleByChannel(HitResult, GetMuzzleWorldLocation(), TraceEnd,
   ECollisionChannel::ECC_Visibility, CollisionParams);
}


