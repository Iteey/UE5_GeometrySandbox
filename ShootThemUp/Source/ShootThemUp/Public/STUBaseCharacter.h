// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "STUBaseCharacter.generated.h"
class UCameraComponent;
class USpringArmComponent;
class USTUHealthComponent;
class UTextRenderComponent;
class UBoxComponent;
UCLASS()
class SHOOTTHEMUP_API ASTUBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASTUBaseCharacter();

protected:
	// Called when the game starts or when spawned
  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  USpringArmComponent* SpringArmComponent;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
  UCameraComponent* CameraComponent;
  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  USTUHealthComponent* HealthComponent;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
  UTextRenderComponent* HealthTextComponent;
  bool FovForwardb;
  bool Checker = false;
  bool IsMovingForward;
  bool WantsToRun = false;
  bool IsRunningForward;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
  float DefaultFOV=90.0f;
  bool flag = false;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
  float DefaultSpeed;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
  float SprintSpeedMultiplier=1.5f;
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
  
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



private:
    void MoveForward(float Amount);
	void MoveRight(float Amount);
	void LookUp(float Amount);
    void TurnAround(float Amount);
    void RunStart();
    void RunStop();
    UFUNCTION(BlueprintCallable, Category = "Movement")
    bool IsRunning() const;
    void ChangeFov(float a);
    void DMG();


};

