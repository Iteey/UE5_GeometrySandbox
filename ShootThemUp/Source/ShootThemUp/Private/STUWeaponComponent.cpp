// Shoot Them Up Game, All Rights Reserved
#include "STUBaseWeapon.h"
#include "STUWeaponComponent.h"
#include "GameFramework/Character.h"

ASTUWeaponComponent::ASTUWeaponComponent()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ASTUWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    SpawnWeapon();
	
}

void ASTUWeaponComponent::SpawnWeapon()
{
    if (!GetWorld()) return;

    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character) return;

    CurrentWeapon = GetWorld()->SpawnActor<ASTUBaseWeapon>(WeaponClass);
    if (!CurrentWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    CurrentWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);

}
void ASTUWeaponComponent::Fire()
{
    if (!CurrentWeapon) return;
    CurrentWeapon->Fire();
}
