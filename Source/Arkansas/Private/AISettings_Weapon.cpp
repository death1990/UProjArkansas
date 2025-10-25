#include "AISettings_Weapon.h"

UAISettings_Weapon::UAISettings_Weapon() {
    this->WeaponFireType = EWeaponFireType::Ranged;
    this->DefaultFiringPatternType = EDefaultFiringPatternType::Simple;
    this->RangedStartWaitTime = 0.00f;
    this->RangedDesiredTimeBetweenTriggerPulls = 0.00f;
    this->RangedMaxMissedTargetCollisionDepth = 75.00f;
}


