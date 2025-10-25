#include "AnimDisableStatusEffect.h"

UAnimDisableStatusEffect::UAnimDisableStatusEffect() {
    this->bLoopForDuration = false;
    this->DurationStat = NULL;
    this->bInvalidIfNoAnimation = false;
    this->bImmobilizeMovement = true;
}


