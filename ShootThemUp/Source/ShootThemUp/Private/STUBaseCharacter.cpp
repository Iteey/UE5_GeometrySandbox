// Shoot Them Up Game, All Rights Reserved
#include "STUBaseCharacter.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include <Kismet/KismetMathLibrary.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "STUHealthComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Controller.h"
#include "STUWeaponComponentv1.h"
#include "STUSniperWeapon.h"
// Sets default values


ASTUBaseCharacter::ASTUBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //Uncomment for 3rd person
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringAramComponent");
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation=true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent); // SpringArmComponent or GetRootComponent()
    
    HealthComponent = CreateDefaultSubobject<USTUHealthComponent>("HealthComponent");
    HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("HealthTextComponent");
    HealthTextComponent->SetupAttachment(GetRootComponent());
    HealthTextComponent->SetOwnerNoSee(false);
    WeaponComponent = CreateDefaultSubobject<USTUWeaponComponentv1>("WeaponComponent");
    
}
    


// Called when the game starts or when spawned
void ASTUBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
    DefaultSpeed = 800;
    HealthComponent->OnDeath.AddUObject(this, &ASTUBaseCharacter::OnDeath);
}


// Called every frame
void ASTUBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    IsRunNow = IsRunning();
    const auto Health = HealthComponent->GetHealth();

    const auto Zoom = WeaponComponent->CurrentWeapon->GetZoomMultiplier();
    
    if (HealthComponent->DieOnce == false) 
    {
        HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.f"), Health)));
    }
    else
    {
        HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("0"))));
    }

    if (flag)
    {
        ChangeFov(110);//Sprint fov
    }
    else if (ZoomNow)
    {
        ChangeFovFast(30+Zoom);
    }
    else if (!flag && !ZoomNow)
    {
        ChangeFov(90);//Default fov
    }
    if (IsRunNow && !flag)
    {
        flag = true;
        GetCharacterMovement()->MaxWalkSpeed *= SprintSpeedMultiplier;

    }
    else if (!IsRunNow)
    {
        flag = false;
        GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
    }
   

}

// Called to bind functionality to input
void ASTUBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    check(PlayerInputComponent);
    check(WeaponComponent);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ASTUBaseCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASTUBaseCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASTUBaseCharacter::LookUp);
    PlayerInputComponent->BindAxis("TurnAround", this, &ASTUBaseCharacter::TurnAround);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASTUBaseCharacter::Jump);
    PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ASTUBaseCharacter::RunStart);
    PlayerInputComponent->BindAction("Run", IE_Released, this, &ASTUBaseCharacter::RunStop);
    PlayerInputComponent->BindAction("Fire", IE_Pressed, WeaponComponent, &USTUWeaponComponentv1::StartFire);
    PlayerInputComponent->BindAction("Fire", IE_Released, WeaponComponent, &USTUWeaponComponentv1::StopFire);
    PlayerInputComponent->BindAction("NextWeapon", IE_Pressed, WeaponComponent, &USTUWeaponComponentv1::NextWeapon);
    PlayerInputComponent->BindAction("WeaponFirst", IE_Pressed, WeaponComponent, &USTUWeaponComponentv1::WeaponFirst);
    PlayerInputComponent->BindAction("WeaponSecond", IE_Pressed, WeaponComponent, &USTUWeaponComponentv1::WeaponSecond);
    PlayerInputComponent->BindAction("AimSniper", IE_Pressed, this, &ASTUBaseCharacter::AimPressed);
    PlayerInputComponent->BindAction("AimSniper", IE_Released, this, &ASTUBaseCharacter::AimReleased);
    PlayerInputComponent->BindAction("WeaponThird", IE_Pressed, WeaponComponent, &USTUWeaponComponentv1::WeaponThird);
    PlayerInputComponent->BindAction("SwitchAmmoType", IE_Pressed, WeaponComponent,&USTUWeaponComponentv1::SwitchCurrentAmmoType);

}

void ASTUBaseCharacter::OnZoom()
{
    UE_LOG(LogTemp, Warning, TEXT("ZDAROVA"));
}

void ASTUBaseCharacter::MoveForward(float Amount)
{
    IsMovingForward = Amount > 0.0f;
    
    AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTUBaseCharacter::DMG(int Amount)
{
    TakeDamage(Amount, FDamageEvent{}, Controller, this);
} 
void ASTUBaseCharacter::MoveRight(float Amount)
{
    AddMovementInput(GetActorRightVector(), Amount);
}

void ASTUBaseCharacter::LookUp(float Amount)
{
    AddControllerPitchInput(Amount);
}

void ASTUBaseCharacter::TurnAround(float Amount)
{
    AddControllerYawInput(Amount);
}

void ASTUBaseCharacter::RunStart()
{
     WantsToRun = true;
}

void ASTUBaseCharacter::RunStop()
{
    WantsToRun = false;
}

bool ASTUBaseCharacter::IsRunning() const
{
    return WantsToRun && IsMovingForward && !GetVelocity().IsZero();
}

void ASTUBaseCharacter::ChangeFov(float a)
{
    DefaultFOV = FMath::FInterpTo(DefaultFOV, a, GetWorld()->GetDeltaSeconds(), 3.5f);
    CameraComponent->FieldOfView = DefaultFOV;

}

void ASTUBaseCharacter::OnDeath()
{
    UE_LOG(LogTemp, Warning, TEXT("Death"));
    PlayAnimMontage(Death_Montage);
    HealthComponent->DieOnce = true;
    GetCharacterMovement()->DisableMovement();
    SetLifeSpan(15.5f);
     CameraComponent->PostProcessSettings.ColorSaturation.Set(1, 1, 1, 0.46);
    CameraComponent->PostProcessSettings.ColorContrast.Set(1.5, 1.5, 1.5, 1);
    CameraComponent->PostProcessSettings.ColorGamma.Set(1, 0.8, 0.7, 1);
    if (Controller)
    {
        Controller->ChangeState(NAME_Spectating);
        
    }
}

void ASTUBaseCharacter::AimPressed()
{
    ZoomNow = true;
    UE_LOG(LogTemp, Warning, TEXT("%d"), ZoomNow);
}

void ASTUBaseCharacter::AimReleased()
{
    ZoomNow = false;
    UE_LOG(LogTemp, Warning, TEXT("%d"), ZoomNow);
}

void ASTUBaseCharacter::ChangeFovFast(float a)
{
    DefaultFOV = FMath::FInterpTo(DefaultFOV, a, GetWorld()->GetDeltaSeconds(), 6.0f);
    CameraComponent->FieldOfView = DefaultFOV;
}



