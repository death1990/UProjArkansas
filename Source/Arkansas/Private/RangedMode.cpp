#include "RangedMode.h"

URangedMode::URangedMode() {
    this->MaxEffectiveRange = 4000.00f;
    this->MaxRange = 5000.00f;
    this->bUseTargeting = true;
    this->bFineAimAutoAim = false;
    this->bHipFireAutoAim = false;
    this->bCanFireDuringADS = true;
    this->bDisableCustomFire = false;
    this->bUsePropMuzzle = false;
    this->bUseAllShootSocketsSimultaneously = false;
    this->bLoopShotCountShootSockets = false;
    this->AnimShotTimeScalar = 0.00f;
    this->ZeroSpreadTime = 0.00f;
    this->Spread = 0.00f;
    this->SpreadScalarP3P = 1.00f;
    this->AISpread = -1.00f;
    this->MoveSpreadPenalty = 0.10f;
    this->MoveSpreadPenaltyScalarP3P = 1.00f;
    this->TTDSpreadScalar = 0.00f;
    this->TTDSpreadScalarP3P = 1.00f;
    this->AimAssistSpread = 5.00f;
    this->BloomPerShotPercent = 0.00f;
    this->BloomPerShotPercentScalarP3P = 1.00f;
    this->MaxBloom = 0.00f;
    this->MaxBloomScalarP3P = 1.00f;
    this->BloomDecayTime = 0.10f;
    this->BloomReturnDelay = 0.00f;
    this->FineAimSpreadReduction = 0.00f;
    this->FineAimSpreadReductionScalarP3P = 1.00f;
    this->FineAimFovAdjustment = -20.00f;
    this->bFineAimUseMagnification = false;
    this->FineAimMagnification = 1.00f;
    this->FineAimForegroundFovAdjustment = 0.00f;
    this->FineAimLookStickRateMultiplier = 0.50f;
    this->FineAimMovementScalar = 0.75f;
    this->FineAimTransitionTime = 0.30f;
    this->AimSnappingConeRadius = 5.00f;
    this->AimAssistMagnetismData = NULL;
    this->bPrioritizeModeSightData = true;
    this->bEnableAimSway = true;
    this->Sway = 0.00f;
    this->SwayScalarP3P = 1.00f;
    this->SwayMovement = 0.00f;
    this->SwayMovementScalarP3P = 1.00f;
    this->SwayCrouchedMultiplier = 1.00f;
    this->SwayCrouchedMultiplierScalarP3P = 1.00f;
    this->SwayChangeTime = 1.00f;
    this->SwayChangeLaziness = 0.50f;
    this->TTDSwayScalar = 0.00f;
    this->TTDSwayScalarP3P = 1.00f;
    this->Recoil = NULL;
    this->EquippedRecoilData = NULL;
    this->RecoilWeaponData = NULL;
    this->ZoomPerShotPercent = 0.00f;
    this->MaxZoom = 0.00f;
    this->ZoomDecayTime = 0.10f;
    this->ZoomReturnDelay = 0.00f;
    this->ZoomAimedScaler = 1.00f;
    this->bEnableLockOn = false;
    this->bRequiresTargetLockToFire = false;
    this->bRequiresTargetLockToHome = false;
    this->LockOnSocket = TEXT("Chest");
    this->LockOnType = ELockOnTickType::Active;
    this->bUseScreenSpaceTargeting = false;
    this->LoseLockTime = 0.10f;
    this->GainLockTime = 0.00f;
    this->TargetingBoundsScale = 1.00f;
    this->LoadedNonStealthMeleeData = NULL;
    this->LoadedStealthMeleeData = NULL;
    this->QuickMeleeTTDScalar = 1.00f;
}

void URangedMode::SetHipFireAutoAim(bool bEnabled) {
}

void URangedMode::SetFineAimAutoAim(bool bEnabled) {
}

void URangedMode::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void URangedMode::OnCrouchStateChanged(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled) {
}

bool URangedMode::IsPerformingAnimationControlledRangeAttack() const {
    return false;
}

bool URangedMode::HasLockedTarget() const {
    return false;
}

float URangedMode::GetWeightedAimProgress() const {
    return 0.0f;
}

FVector URangedMode::GetShotOrigin() const {
    return FVector{};
}

FName URangedMode::GetShootSocketName(bool bUseShotGroupIndex) const {
    return NAME_None;
}

FRotator URangedMode::GetMuzzleRotation(EMeshPerspective Perspective) const {
    return FRotator{};
}

bool URangedMode::GetMuzzleLocationAndRotation(FVector& Location, FRotator& Rotation, EMeshPerspective Perspective, bool bUseShotGroupIndex) const {
    return false;
}

FVector URangedMode::GetMuzzleLocation(EMeshPerspective Perspective, bool bUseShotGroupIndex) const {
    return FVector{};
}

FVector URangedMode::GetMuzzleDirectionNoOverride() const {
    return FVector{};
}

FVector URangedMode::GetMuzzleDirection(EMeshPerspective Perspective) const {
    return FVector{};
}

bool URangedMode::GetHipFireAutoAim() const {
    return false;
}

bool URangedMode::GetFineAimAutoAim() const {
    return false;
}

int32 URangedMode::GetAmmotShotCount() const {
    return 0;
}

float URangedMode::GetAimProgress() const {
    return 0.0f;
}

FVector URangedMode::GetAimOrigin(bool bIsForShotSpawnTransform) const {
    return FVector{};
}

FVector URangedMode::GetAimingDirection(bool bIsForShotSpawnTransform) const {
    return FVector{};
}

bool URangedMode::DoesSightAllowQuickMelee() const {
    return false;
}

bool URangedMode::DoesSightAllowMuzzleFlash() const {
    return false;
}

void URangedMode::ClearActiveAnimationControlledRangeAttackMontage() {
}


