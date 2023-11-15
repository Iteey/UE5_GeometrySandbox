// Shoot Them Up Game, All Rights Reserved
#include "STUWeaponComponentv1.h"
#include "STUBaseWeapon.h"
#include "GameFramework/Character.h"
#include "STUEquipFinishedAnimNotify.h"


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
    for (auto WeaponClass : WeaponClasses)
    {
        auto Weapon = GetWorld()->SpawnActor<ASTUBaseWeapon>(WeaponClass);
        if (!Weapon)
            continue;

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
    if (!EquipAnimMontage) return;
    const auto NotifyEvents = EquipAnimMontage->Notifies;

    for (auto NotifyEvent : NotifyEvents)
    {
    auto EquipFinishedNotify = Cast<USTUEquipFinishedAnimNotify>(NotifyEvent.Notify);
    if (EquipFinishedNotify)
        {
            EquipFinishedNotify->OnNotified.AddUObject(this, &USTUWeaponComponentv1::OnEquipFinished);
            break;
        }
    }
}

void USTUWeaponComponentv1::OnEquipFinished(USkeletalMeshComponent* MeshComponent)
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
        return;
        if (Character->GetMesh() == MeshComponent)
        {
            CanShootNow = true;
            CanSwitchWeapon = true;
            UE_LOG(LogTemp, Warning, TEXT("Finish"));
        }
}

void USTUWeaponComponentv1::StartFire()
{
    if (!CurrentWeapon || !CanShootNow)
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

void USTUWeaponComponentv1::NextWeapon()
{
    if (!CanSwitchWeapon)
        return;
    StopFire();
    CurrentWeaponIndex = (CurrentWeaponIndex + 1) % Weapons.Num();
    EquipWeapon(CurrentWeaponIndex);
}
