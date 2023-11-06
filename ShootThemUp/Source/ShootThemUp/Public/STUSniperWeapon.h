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

  public:

    virtual void StartFire() override;


  protected:
    virtual void MakeShot() override;
    virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;

  private:
    FTimerHandle ShotTimerHandle;
};
