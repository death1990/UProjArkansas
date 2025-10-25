#include "SightData.h"

USightData::USightData() {
    this->bSightHidesPlayerMesh = false;
    this->ReticleVisuals = NULL;
    this->ReticleVisualsFineAim = NULL;
    this->bCanOverrideModeBehavior = false;
    this->bUsesHUDScopeMode = false;
    this->bSightAllowsQuickMelee = true;
    this->bSightAllowsMuzzleFlash = true;
    this->bUseMagnification = false;
    this->IdleFOVAdjustment = 0.00f;
    this->IdleFOVMagnification = 1.00f;
    this->AimingFOVAdjustment = 0.00f;
    this->AimingFOVMagnification = 1.00f;
    this->TransitionInTime = 0.50f;
    this->TransitionOutTime = 0.50f;
    this->CameraTransitionInPercent = 0.00f;
    this->CameraTransitionOutPercent = 0.00f;
    this->CameraTransitionAlpha = 0.10f;
    this->TransitionInCommitmentTime = 0.00f;
    this->TransitionOutCommitmentTime = 0.00f;
    this->FineAimScopedTransition = 0.50f;
    this->LookStickRateMultiplier = 1.00f;
    this->bOverrideSway = true;
    this->bForceEnableSway = false;
    this->bForceDisableSway = false;
    this->SwayOverride = 0.00f;
    this->SwayMovementOverride = 1.00f;
    this->bIsScoped = false;
    this->bAllowModsToOverrideScoped = true;
}


