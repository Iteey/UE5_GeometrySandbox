// Shoot Them Up Game, All Rights Reserved


#include "STUSniperWeapon.h"




void ASTUSniperWeapon::AimPressed()
{
    UE_LOG(LogTemp, Warning, TEXT("zoom"));
    AimingNow = true;
    GetZoom();
}

void ASTUSniperWeapon::AimReleased()
{
    AimingNow = false;
    GetZoom();
    
}
bool ASTUSniperWeapon::GetZoom()
{
    return AimingNow;

    
}
float ASTUSniperWeapon::GetZoomMultiplier()
{
    return SniperZoomPlus;
}
void ASTUSniperWeapon::StartFire()
{
    UE_LOG(LogTemp, Warning, TEXT("BAH"));
    MakeShot();
}



void ASTUSniperWeapon::MakeShot()
{
    const auto Controller = GetPlayerController();

    if (!GetWorld())
        return;
    FVector TraceStart, TraceEnd;
    if (!GetTraceData(TraceStart, TraceEnd))
        return;
    FHitResult HitResult;
    MakeHit(HitResult, TraceStart, TraceEnd);

    if (HitResult.bBlockingHit)
    {
        MakeDamage(HitResult);
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), HitResult.ImpactPoint, FColor::Red, false, 0.1f, 0, 3.0f);
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 0.5f);
        UE_LOG(LogTemp, Warning, TEXT("Bone: %s"), *HitResult.BoneName.ToString());
    }
    else
    {
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceEnd, FColor::Red, false, 0.1f, 0, 3.0f);
    }
}
bool ASTUSniperWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
    FVector ViewLocation;
    FRotator ViewRotation;
    if (!GetPlayerViewPoint(ViewLocation, ViewRotation))
        return false;

    TraceStart = ViewLocation; // SocketTransform.GetLocation();
    const auto HalfRad = FMath::DegreesToRadians(BulletSpread);
    const FVector ShootDirection =
        FMath::VRandCone(ViewRotation.Vector(), HalfRad); // SocketTransform.GetRotation().GetForwardVector();
    TraceEnd = TraceStart + ShootDirection * SniperTraceMaxDistance;
    return true;
}