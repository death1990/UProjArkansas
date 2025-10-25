#include "MeleeAnim.h"

FMeleeAnim::FMeleeAnim() {
    this->WeaponEvent = EWeaponEvent::Invalid;
    this->AnimTime = 0.00f;
    this->bLoop = false;
    this->bSkippable = false;
    this->bSkipIfHoldReleased = false;
}

