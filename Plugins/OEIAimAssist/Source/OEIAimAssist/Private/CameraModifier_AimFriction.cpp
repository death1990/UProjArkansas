#include "CameraModifier_AimFriction.h"

UCameraModifier_AimFriction::UCameraModifier_AimFriction() {
    this->bIsLookInputMaximized = false;
    this->AppliedFrictionAlpha = 0.00f;
    this->TargetActor = NULL;
    this->TargetLostTime = 0.00f;
    this->bInDelay = false;
}


