#include "HealStatusEffect.h"

UHealStatusEffect::UHealStatusEffect() {
    this->HealValue = 0.00f;
    this->HealValuePercent = 0.00f;
    this->HealValueType = EHealValueType::Value;
    this->bCanHealDead = false;
    this->bUseHealingCurve = false;
}

EHealValueType UHealStatusEffect::GetHealValueType() const {
    return EHealValueType::Value;
}

float UHealStatusEffect::GetHealValuePercent() const {
    return 0.0f;
}

float UHealStatusEffect::GetHealValue() const {
    return 0.0f;
}


