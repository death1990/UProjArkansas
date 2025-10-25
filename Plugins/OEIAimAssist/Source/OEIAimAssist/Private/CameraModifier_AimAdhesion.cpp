#include "CameraModifier_AimAdhesion.h"

UCameraModifier_AimAdhesion::UCameraModifier_AimAdhesion() {
    this->bHasLookInput = false;
    this->AppliedAdhesion = 0.00f;
    this->TargetLostTime = 0.00f;
    this->bInDelay = false;
    this->bIsAimSnapping = false;
    this->AimSnappingTargetTime = 0.00f;
    this->AimSnappingStartTime = 0.00f;
}

float UCameraModifier_AimAdhesion::GetCurrentAdhesionRadius() const {
    return 0.0f;
}

float UCameraModifier_AimAdhesion::GetCurrentAdhesionPercent() const {
    return 0.0f;
}

float UCameraModifier_AimAdhesion::GetCurrentAdhesionDistance() const {
    return 0.0f;
}


