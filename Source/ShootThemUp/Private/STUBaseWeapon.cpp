#include "STUBaseWeapon.h"

#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
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
void ASTUBaseWeapon::ReloadAmmo()
{
    CurrentAmmo.Bullets = DefaultAmmo.Bullets;
}
void ASTUBaseWeapon::DecreaseAmmo()
{
    if (CurrentAmmo.Bullets == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Clip is empty"));
        return;
    }
    if (!CurrentAmmo.Infinite)
        CurrentAmmo.Bullets--;
    LogAmmo();
    if (IsClipEmpty() && !IsAmmoEmpty())
    {
        StopFire();
        OnClipEmpty.Broadcast(this);
    }

}
void ASTUBaseWeapon::ChangeCurrentClip()
{
    ChangeClip();
}
bool ASTUBaseWeapon::IsAmmoEmpty() const
{
    return !CurrentAmmo.Infinite && CurrentAmmo.Clips == 0 && IsClipEmpty();
}
float ASTUBaseWeapon::GetNumBullets()
{

    return CurrentAmmo.Bullets;
}
float ASTUBaseWeapon::GetNumClips()
{
    if (CurrentAmmo.Infinite)
        return 1;
    return CurrentAmmo.Clips;
}
bool ASTUBaseWeapon::IsClipEmpty() const
{
    return CurrentAmmo.Bullets == 0;
}
void ASTUBaseWeapon::ChangeClip()
{

    if (!CurrentAmmo.Infinite)
    {
        if (CurrentAmmo.Clips == 0)
        {

            UE_LOG(LogTemp, Warning, TEXT("NO MORE CLIPS"));
            return;
        }
        else
        {
            CurrentAmmo.Clips--;
        }
        OnClipEmpty.Broadcast(this);
    }
    UE_LOG(LogTemp, Warning, TEXT("---Change clip---"));
}
void ASTUBaseWeapon::LogAmmo()
{
    FString AmmoInfo = "Ammo: " + FString::FromInt(CurrentAmmo.Bullets) + " / ";
    AmmoInfo += CurrentAmmo.Infinite ? "Infinite" : FString::FromInt(CurrentAmmo.Clips);
}
bool ASTUBaseWeapon::IsAmmoFull() const
{
    return CurrentAmmo.Clips == DefaultAmmo.Clips &&
        CurrentAmmo.Bullets == DefaultAmmo.Bullets;
}
bool ASTUBaseWeapon::CanReload() const
{

    return CurrentAmmo.Bullets < DefaultAmmo.Bullets && CurrentAmmo.Clips > 0;
}
bool ASTUBaseWeapon::TryToAddAmmo(int32 ClipsAmount)
{
    if (CurrentAmmo.Infinite || IsAmmoFull() || ClipsAmount <= 0)
        return false;
    if (IsAmmoEmpty())
    {
        CurrentAmmo.Clips = FMath::Clamp(CurrentAmmo.Clips + ClipsAmount, 0, DefaultAmmo.Clips);
        OnClipEmpty.Broadcast(this);
    }
    else if (CurrentAmmo.Clips < DefaultAmmo.Clips)
    {
        const auto NextClipsAmount = CurrentAmmo.Clips + ClipsAmount;
        if (DefaultAmmo.Clips - NextClipsAmount >= 0)
        {
            CurrentAmmo.Clips = NextClipsAmount;
            UE_LOG(LogTemp, Warning, TEXT("Clips were added"));
        }
        else
        {
            CurrentAmmo.Clips = DefaultAmmo.Clips;
            CurrentAmmo.Bullets = DefaultAmmo.Bullets;
            UE_LOG(LogTemp, Warning, TEXT("Ammo is full now"));
        }
    }
    else
    {
        CurrentAmmo.Bullets = DefaultAmmo.Bullets;
        UE_LOG(LogTemp, Warning, TEXT("Bullets were added"));
    }
    return true;
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
    if (!GetOwner()) // Проверка на нулевой указатель
        return nullptr;
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

void ASTUBaseWeapon::BeginPlay()
{
    Super::BeginPlay();
    checkf(DefaultAmmo.Bullets >= 0, TEXT("Bellets count couldn't be less or equal zero")); // Добавлена проверка на нулевой указатель
    CurrentAmmo.Bullets = DefaultAmmo.Bullets;
    CurrentAmmo.Clips = DefaultAmmo.Clips;
    CurrentAmmo.Infinite = DefaultAmmo.Infinite;
    check(WeaponMesh);
}

bool ASTUBaseWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
    FVector ViewLocation;
    FRotator ViewRotation;
    if (!GetPlayerViewPoint(ViewLocation, ViewRotation))
        return false;

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
    if (!GetWorld())
        return;
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner());

    FHitResult LocalHitResult; // Создание локальной переменной
    GetWorld()->LineTraceSingleByChannel(LocalHitResult, GetMuzzleWorldLocation(), TraceEnd,
        ECollisionChannel::ECC_Visibility, CollisionParams);

    HitResult = LocalHitResult; // Присваивание локальной переменной результатов
}
