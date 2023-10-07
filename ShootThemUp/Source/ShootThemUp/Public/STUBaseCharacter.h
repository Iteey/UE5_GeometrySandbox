﻿// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "STUBaseCharacter.generated.h"
class UCameraComponent;
class USpringArmComponent;

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
  bool FovForwardb;
  bool Checker = false;
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

    void FovForward(float Amount);
    void FovInterp(float x, float y);

};


/*

inline int cub()
{

    int x1;
    int i;
    float a[15], b[15], c[15], y[15], x[15], h[15], d[15], k[15], l[15], r[15], s[15];

    int n = 15;

    //============================нахождение коэффициентов============//

    for (int i = 2; i <= n - 1; i++)
    {
        k[1] = 0;
        l[1] = 0;

        h[i - 1] = x[i - 1] - x[i - 2];
        h[i] = x[i] - x[i - 1];

        s[i] = 2 * (h[i] + h[i - 1]);

        r[i] = 3 * ((y[i] - y[i - 1]) / h[i] - (y[i - 1] - y[i - 2]) / h[i - 1]);

        k[i] = (r[i] - h[i - 1] * k[i - 1]) / (s[i] - h[i - 1] * l[i - 1]);

        l[i] = h[i] / (s[i] - h[i - 1] * l[i - 1]);
    }

    c[n - 1] = k[n - 1];
    for (i = n - 2; i >= 2; i--)
        c[i] = k[i] - l[i] * c[i + 1];

    for (i = 1; i <= 14; i++)
    {
        h[i] = x[i] - x[i - 1];
        a[i] = y[i - 1];
        b[i] = (y[i] - y[i - 1]) / h[i] - h[i] * (2 * c[i] + c[i + 1]) / 3;
        d[i] = (c[i + 1] - c[i]) / 3 * h[i];
    }

    i = 1;
    x1 = x[0];
    int x2;
    float y2 = 0;

    do
    {
        do
        {
            y2 = a[i] + b[i] * (x1 - x[i - 1]) + c[i] * pow((x1 - x[i - 1]), 2) + d[i] * pow((x1 - x[i - 1]), 3);
            x1 = x1 + 0.001;
            x2 = static_cast<int>(x1);
        } while (x2 != x[i]);

        i++;
        x1 = x[i - 1];
    } while (i != n - 1);

    for (i = 0; i <= n - 1; i++)
}
*/