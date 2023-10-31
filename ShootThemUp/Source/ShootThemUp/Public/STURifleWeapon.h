// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "STUBaseWeapon.h"
#include "STURifleWeapon.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTTHEMUP_API ASTURifleWeapon : public ASTUBaseWeapon
{

	GENERATED_BODY()

  protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float TimeBetweenShots = 0.05f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float BulletSpread = 1;


  public:
    virtual void StopFire() override;
    virtual void StartFire() override;

  protected:
    virtual void MakeShot() override;
    virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;
    private:
    FTimerHandle ShotTimerHandle;
};
