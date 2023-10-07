// Shoot Them Up Game, All Rights Reserved


#include "STUBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
// Sets default values
ASTUBaseCharacter::ASTUBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //Uncomment for 3rd person
    //SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringAramComponent");
    //SpringArmComponent->SetupAttachment(GetRootComponent());
    //SpringArmComponent->bUsePawnControlRotation=true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(GetRootComponent()); // SpringArmComponent or GetRootComponent()
    

}

// Called when the game starts or when spawned
void ASTUBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTUBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

// Called to bind functionality to input
void ASTUBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ASTUBaseCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASTUBaseCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASTUBaseCharacter::LookUp);
    PlayerInputComponent->BindAxis("TurnAround", this, &ASTUBaseCharacter::TurnAround);

}

void ASTUBaseCharacter::MoveForward(float Amount)
{
    AddMovementInput(GetActorForwardVector(), Amount);
    if (Amount > 0)
    {
        
        if (Checker)
        {
            FovInterp(90, 30);
            UE_LOG(LogTemp, Warning, TEXT("CHECKER WAS TRUE DONE, NOW FALSE"));
            Checker = false;
        }
   
    }
    else
    {
        if (!Checker)
        {
            UE_LOG(LogTemp, Warning, TEXT("CHECKER WAS FALSE, NOW TRUE"));
            CameraComponent->FieldOfView = 90;
            Checker = true;
        }

        
    }
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

void ASTUBaseCharacter::FovForward(float Amount)
{
}

void ASTUBaseCharacter::FovInterp(float x, float y)
{
    for (int i = 0; i < y; i++)
    {
        float b = FMath::FInterpTo(x, i, -100, -500.f);
        CameraComponent->FieldOfView = x+b;
        UE_LOG(LogTemp, Warning, TEXT("%f = FOV"), 90+b);
    }
}
