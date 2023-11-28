// Shoot Them Up Game, All Rights Reserved
#include "STUWeaponComponentv1.h"
#include "STUBaseWeapon.h"
#include "GameFramework/Character.h"
#include "STUEquipFinishedAnimNotify.h"
#include "STUReloadFinishAnimNotify.h"
#include "AnimUtils.h"


// Sets default values for this component's properties
USTUWeaponComponentv1::USTUWeaponComponentv1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
    
	// ...
}




// Called when the game starts
void USTUWeaponComponentv1::BeginPlay()
{
    Super::BeginPlay();
    InitAnimations();
    SpawnWeapons();
    EquipWeapon(CurrentWeaponIndex);
}


void USTUWeaponComponentv1::SpawnWeapons()
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character || !GetWorld())
        return;
    for (auto OneWeaponData : WeaponData)
    {
        auto Weapon = GetWorld()->SpawnActor<ASTUBaseWeapon>(OneWeaponData.WeaponClass);
        if (!Weapon)
            continue;
        Weapon->OnClipEmpty.AddUObject(this,&USTUWeaponComponentv1::OnEmptyClip);
        Weapon->SetOwner(Character);
        Weapons.Add(Weapon);
        AttachWeaponToSocket(Weapon, Character->GetMesh(), WeaponArmorySocketName);
    }

    if (!CurrentWeapon)
        return;

}
void USTUWeaponComponentv1::AttachWeaponToSocket(ASTUBaseWeapon* Weapon, USceneComponent* SceneComponent,
                                               const FName& SocketName)
{
    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    Weapon->AttachToComponent(SceneComponent, AttachmentRules, SocketName);
}

void USTUWeaponComponentv1::EquipWeapon(int32 WeaponIndex)
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
        return;
    if (CurrentWeapon)
    {
    AttachWeaponToSocket(CurrentWeapon, Character->GetMesh(), WeaponArmorySocketName);
    }
    CurrentWeapon = Weapons[WeaponIndex]; 
    CurrentReloadAnimMontage = WeaponData[WeaponIndex].ReloadAnimMontage;
    const auto CurrentWeaponData = WeaponData.FindByPredicate([&](const FWeaponData& Data){ return Data.WeaponClass == CurrentWeapon->GetClass();});
    AttachWeaponToSocket(CurrentWeapon, Character->GetMesh(), WeaponEquipSocketName);
    PlayAnimMontage(EquipAnimMontage);
}

void USTUWeaponComponentv1::PlayAnimMontage(UAnimMontage* Animation)
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
    return;
    CanSwitchWeapon = true;
    CanShootNow = false;
    Character->PlayAnimMontage(Animation);
}

void USTUWeaponComponentv1::InitAnimations()
{
 

    auto EquipFinishedNotify = AnimUtils::FindNotifyByClass<USTUEquipFinishedAnimNotify>(EquipAnimMontage);
    if (EquipFinishedNotify)
    {
        EquipFinishedNotify->OnNotified.AddUObject(this, &USTUWeaponComponentv1::OnEquipFinished);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Equip anim notify is forotten to set"));
        checkNoEntry();
    }
    for (auto OneWeaponData : WeaponData)
    {
        auto ReloadFinishedNotify = AnimUtils::FindNotifyByClass<USTUReloadFinishAnimNotify>(OneWeaponData.ReloadAnimMontage);
        if (!ReloadFinishedNotify)
            continue;
        if (ReloadFinishedNotify)
        {
            ReloadFinishedNotify->OnNotified.AddUObject(this, &USTUWeaponComponentv1::OnReloadFinished);
        }
    }
}
bool USTUWeaponComponentv1::GetWeaponAmmoData(FAmmoData& AmmoData) const
{

    if (CurrentWeapon)
    {
        AmmoData = CurrentWeapon->GetAmmoData();
        return true;
    }
    return false;
}

void USTUWeaponComponentv1::OnEquipFinished(USkeletalMeshComponent* MeshComponent)
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
        return;
        if (Character->GetMesh() == MeshComponent)
        {
            CanShootNow = true;
            ReloadAnimInProgress = false;
            CanSwitchWeapon = true;
            UE_LOG(LogTemp, Warning, TEXT("Finish"));
        }
        CanShootNow = true;
        ReloadAnimInProgress = false;
}
void USTUWeaponComponentv1::OnEmptyClip()
{
        UE_LOG(LogTemp, Warning, TEXT("OnEmpty"));
        ChangeClip();
}
void USTUWeaponComponentv1::ChangeClip()
{
        if (ReloadAnimInProgress) return;
  
        //CurrentWeapon->StopFire();
        //CurrentWeapon->ChangeCurrentClip();
        ReloadAnimInProgress = true;
        PlayAnimMontage(CurrentReloadAnimMontage);
}
void USTUWeaponComponentv1::OnReloadFinished(USkeletalMeshComponent* MeshComponent)
{
        ACharacter* Character = Cast<ACharacter>(GetOwner());
        if (!Character)
            return;
        CanShootNow = true;
        ReloadAnimInProgress = false;
}


void USTUWeaponComponentv1::StartFire()
{
        if (!CurrentWeapon || !CanShootNow || ReloadAnimInProgress)
        return;
    CurrentWeapon->StartFire();
}

void USTUWeaponComponentv1::StopFire()
{
    if (!CurrentWeapon)
        return;
    CurrentWeapon->StopFire();
}

void USTUWeaponComponentv1::WeaponFirst()
{
    if (!CanSwitchWeapon)
        return;
    StopFire();
    CurrentWeaponIndex = 0;
    EquipWeapon(CurrentWeaponIndex);
}
void USTUWeaponComponentv1::WeaponSecond()
{
    if (!CanSwitchWeapon)
        return;
    StopFire();
    CurrentWeaponIndex = 1;
    EquipWeapon(CurrentWeaponIndex);
}
void USTUWeaponComponentv1::WeaponThird()
{
    if (!CanSwitchWeapon)
        return;
    StopFire();
    CurrentWeaponIndex = 2;
    EquipWeapon(CurrentWeaponIndex);
}
void USTUWeaponComponentv1::AimPressed()
{
    if (!CurrentWeapon)
        return;
    CurrentWeapon->AimPressed();
}
void USTUWeaponComponentv1::AimReleased()
{
    if (!CurrentWeapon)
        return;
    CurrentWeapon->AimReleased();
}

void USTUWeaponComponentv1::SwitchCurrentAmmoType()
{
    if (!CurrentWeapon)
        return;
    CurrentWeapon->SwitchCurrentAmmoType();
}

void USTUWeaponComponentv1::Reload()
{
    CurrentWeapon->ChangeCurrentClip();
    ChangeClip();
   
}

void USTUWeaponComponentv1::NextWeapon()
{
    if (!CanSwitchWeapon)
        return;
    StopFire();
    CurrentWeaponIndex = (CurrentWeaponIndex + 1) % Weapons.Num();
    EquipWeapon(CurrentWeaponIndex);
}
