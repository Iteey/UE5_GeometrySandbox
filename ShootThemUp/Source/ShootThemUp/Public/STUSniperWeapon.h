// Shoot Them Up Game, All Rights Reserved

#pragma once


#include "CoreMinimal.h"
#include "STUBaseWeapon.h"
#include "STUSniperWeapon.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTTHEMUP_API ASTUSniperWeapon : public ASTUBaseWeapon
{
	GENERATED_BODY()
  protected:
   

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float TimeBetweenShots = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float BulletSpread = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float SniperZoomPlus = -20;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float SniperTraceMaxDistance = 8000.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    bool SniperAimingNow = false;

  public:
    virtual void AimPressed() override;
    virtual void AimReleased() override;
    virtual void StartFire() override;
    bool GetZoom();
    UFUNCTION(BlueprintCallable, Category = "Weapon")
    bool GetSniperAiming();
    bool AimingNow = false;
    virtual float GetZoomMultiplier() override;


  protected:
    virtual void MakeShot() override;
    virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;

  private:
    FTimerHandle ShotTimerHandle;
};
