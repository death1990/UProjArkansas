#include "AISettings_RangedBehavior.h"

FAISettings_RangedBehavior::FAISettings_RangedBehavior() {
    this->OnEnterCombatBehavior = EOnEnterCombatBehavior::None;
    this->bLimitedRange = false;
    this->bShootAtFeet = false;
    this->bArcingWeapon = false;
    this->bLostSightFire = false;
    this->MinMoveDistance = 0.00f;
    this->MaxMoveDistance = 0.00f;
    this->DefaultRole = NULL;
}

