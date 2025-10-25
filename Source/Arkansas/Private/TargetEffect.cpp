#include "TargetEffect.h"

FTargetEffect::FTargetEffect() {
    this->SpellEffectTarget = ESpellEffectTarget::Self;
    this->CompanionID = ESpecialObsidianID::None;
    this->EffectDirectionType = ESpellEffectDirectionType::Default;
    this->RotationAngle = 0.00f;
    this->bRandomlyNegateRotationAngle = false;
    this->bInverseDirection = false;
    this->bForceTwoDimensionalDirection = false;
}

