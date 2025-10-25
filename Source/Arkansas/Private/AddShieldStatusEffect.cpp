#include "AddShieldStatusEffect.h"

UAddShieldStatusEffect::UAddShieldStatusEffect() {
    this->bOverrideShieldGainAmount = false;
    this->ShieldGainAmount = 0.00f;
    this->ScalarModifier = 1.00f;
    this->bOverrideMaxShieldHealth = false;
    this->MaxShieldHealthOverride = 0.00f;
}


