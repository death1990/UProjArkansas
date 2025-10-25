#include "BeamMode.h"

UBeamMode::UBeamMode() {
    this->bEnableLockOn = true;
    this->bTickDamage = true;
    this->bArcDamage = false;
    this->bRequiresTriggerReleaseForArc = true;
    this->TickDamageTime = 0.10f;
    this->ArcTime = 1.00f;
    this->ArcShotTime = 0.25f;
    this->bDebugDrawArcVisuals = false;
    this->TickRecoilTime = 0.00f;
    this->ImpactData = NULL;
    this->bCacheLineTrace = false;
    this->ActiveLineTraceRefreshRate = 0.50f;
    this->TickAmmoTime = 0.10f;
    this->AmmoPerTick = 1;
    this->AmmoPerArc = 0;
    this->bOnlyConsumeAmmoIfLocked = false;
}

FVector UBeamMode::GetTargetLocation() const {
    return FVector{};
}

FVector UBeamMode::GetLastLineTraceHitLocation() const {
    return FVector{};
}

float UBeamMode::GetBeamLockProgress() const {
    return 0.0f;
}

bool UBeamMode::DidLastLineTraceHit() const {
    return false;
}


