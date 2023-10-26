// Shoot Them Up Game, All Rights Reserved
#include "STUWeaponComponentv1.h"
#include "STUBaseWeapon.h"
#include "GameFramework/Character.h"


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

	SpawnWeapon();
	
}



void USTUWeaponComponentv1::SpawnWeapon()
{
    if (!GetWorld())
        return;

    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character)
        return;

    CurrentWeapon = GetWorld()->SpawnActor<ASTUBaseWeapon>(WeaponClass);
    if (!CurrentWeapon)
        return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    CurrentWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
    CurrentWeapon->SetOwner(Character);
}
void USTUWeaponComponentv1::StartFire()
{
    if (!CurrentWeapon && CanShootNow)
        return;
    CurrentWeapon->StartFire();
}

void USTUWeaponComponentv1::StopFire()
{
    if (!CurrentWeapon)
        return;
    CurrentWeapon->StopFire();
}
