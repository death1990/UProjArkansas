#include "PushDisableStatusEffect.h"

UPushDisableStatusEffect::UPushDisableStatusEffect() {
    this->bImmobilizeMovement = false;
    this->PushSpeed = 0.00f;
    this->PushSpeedZ = 0.00f;
    this->SlideFriction = 0.00f;
    this->ClearEffectDistanceToOrigin = -1.00f;
    this->ClearEffectDistanceFromOrigin = -1.00f;
    this->bClearEffectUsesSpaceBetweenColliders = false;
    this->AcceptableHeightDifference = 0.00f;
    this->bPushAwayFromOriginActor = false;
}


