#include "FireMode.h"

UFireMode::UFireMode() {
    this->FireMode = EFireMode::Automatic;
    this->bRequiresTriggerReleaseForBurst = true;
    this->bRequiresReChamberOnFire = false;
    this->bRechamberRequiresHipFire = false;
    this->ReChamberTime = -1.00f;
    this->bUseAlternateADSRechamberTime = false;
    this->ADSRechamberTime = 1.00f;
    this->OverrideProjectileClass = NULL;
    this->bApplyDamageDescriptionToSpawnedActor = true;
    this->bUseMuzzleRotationForProjectileVisuals = false;
    this->bAllowPenetration = false;
    this->MaxPenetrations = 0;
    this->OverrideInstantHitData = NULL;
    this->DelayFireTime = 0.00f;
    this->ShotTime = 1.00f;
    this->bUseAlternateADSShotTime = false;
    this->ADSShotTime = 1.00f;
    this->bUseLastShotShotTime = false;
    this->LastShotShotTime = 1.00f;
    this->bUseAlternateLastShotADSShotTime = false;
    this->LastShotADSShotTime = 1.00f;
    this->AmmoPerShot = 1;
    this->ShotsPerShot = 1;
    this->bUsesTracers = false;
    this->bAmmoEffectsProperties = false;
    this->ShotsPerBurst = 3;
    this->BurstDuration = 0.40f;
    this->PostBurstDelay = 0.50f;
    this->ChargeFireThreshold = 0.00f;
    this->bUseChargeAmmoCurve = false;
    this->AmmoMaxCharge = 1;
    this->ChargeDelay = 0.10f;
    this->ChargeDuration = 1.00f;
    this->AnimChargeBlendDuration = 1.00f;
    this->ChargeBuildUpTime = 0.25f;
    this->bUseChargeGravityScale = false;
    this->bUseChargeSpeedScale = false;
    this->bUseChargeTrajectoryScale = false;
    this->bResetChargePerShot = true;
    this->FiringAngle = 0.00f;
    this->FiringAngleYaw = 0.00f;
    this->bAllowRamping = false;
    this->RampShotDelay = 0.50f;
    this->bShareRampTimersWithOtherModes = false;
    this->bUseRampROFCurve = false;
    this->bRampWhileFineAiming = false;
    this->bFineAimRampOnlyWhenFull = false;
    this->RampDownMultiplier = 1.00f;
    this->MinRampTime = 0.10f;
    this->MinRampDuration = 3.00f;
    this->bAllowBuildUp = false;
    this->bClearOverHeatOnUnequip = false;
    this->BuildUpDecayDelay = 0.00f;
    this->BuildUpDecayRate = 0.00f;
    this->ActiveTriggerBuildUpDecayRateMult = 1.00f;
    this->bMaxBuildUpConditions = false;
    this->bPreventFiringWhileCooling = false;
    this->MaxBuildUpDecayDelay = 0.00f;
    this->MaxBuildUpDecayRate = 0.00f;
    this->MaxBuildUpSpell = NULL;
    this->bRouteThroughCombatQueue = false;
    this->TelemetryReportThrottle = 0.00f;
    this->bUsesMinigunAudio = false;
    this->bTrackShotIndices = false;
    this->GeneralShotIndexDecay = 0.01f;
}

bool UFireMode::UsesCharge() const {
    return false;
}

void UFireMode::ResetRamp() {
}

void UFireMode::ResetCharge() {
}

void UFireMode::ResetBuildUp() {
}

void UFireMode::OnTimeDilationUpdated(float Value) {
}

void UFireMode::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UFireMode::OnAllAmmoTypePoolUpdated(UAmmo* NewAmmo, int32 Count) {
}

bool UFireMode::IsSemiAutomatic() const {
    return false;
}

bool UFireMode::IsCharge() const {
    return false;
}

bool UFireMode::IsBurstCharge() const {
    return false;
}

bool UFireMode::IsBurst() const {
    return false;
}

bool UFireMode::IsAutomatic() const {
    return false;
}

bool UFireMode::GetUsesMinigunAudio() {
    return false;
}

FVector UFireMode::GetTargetLocation() const {
    return FVector{};
}

TEnumAsByte<EPhysicalSurface> UFireMode::GetLastShotHitSurface() {
    return SurfaceType_Default;
}

AIndianaCharacter* UFireMode::GetLastShotHitCharacter() {
    return NULL;
}

FVector UFireMode::GetLastShotEndLocation() const {
    return FVector{};
}

float UFireMode::GetChargeProgress() const {
    return 0.0f;
}

bool UFireMode::CanCharge() const {
    return false;
}


