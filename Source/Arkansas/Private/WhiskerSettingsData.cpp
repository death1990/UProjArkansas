#include "WhiskerSettingsData.h"

FWhiskerSettingsData::FWhiskerSettingsData() {
    this->WhiskerRings = 0;
    this->WhiskersPerRing = 0;
    this->WhiskerPivotSpread = 0.00f;
    this->WhiskerCameraSpread = 0.00f;
    this->WhiskerScale = 0.00f;
    this->P1PRearDistance = 0.00f;
    this->bUseOffsetHold = false;
    this->OffsetLerpSpeed = 0.00f;
    this->TargetArmScaleSpeedAdjustement = 0.00f;
    this->ReleaseSpeedMultiplier = 0.00f;
    this->DynamicWhiskerReleaseTime = 0.00f;
    this->ReleaseHoldLerpSpeed = 0.00f;
    this->OffsetHoldDuration = 0.00f;
    this->bUseDynamicWhiskers = false;
    this->NumDynamicWhiskers = 0;
    this->DynamicWhiskerSpacing = 0.00f;
    this->VerificationSphereRadius = 0.00f;
    this->bOptimizeNumRings = false;
    this->InnerRingRadius = 0.00f;
    this->IgnoreDimensions = 0.00f;
    this->LerpSpeedDistanceMultiplier = 0.00f;
    this->IgnoreDistance = 0.00f;
    this->WeaponVisibilityOpacityThreshold = 0.00f;
    this->ForceFPVDistance = 0.00f;
    this->ReleaseForcedFPVDistance = 0.00f;
    this->ReleaseForcedFPVCameraDelta = 0.00f;
    this->bDitherInsteadOfForcedFPV = false;
}

