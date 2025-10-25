#include "OnCausedDamage.h"

UOnCausedDamage::UOnCausedDamage() {
    this->bTriggerOnZeroDamage = false;
    this->bPassThroughDamage = false;
    this->bOneCount = false;
    this->bIsTargetWeak = false;
    this->PassThroughDamageScalar = 1.00f;
    this->bUseDesiredDamageAmount = true;
    this->DamageType = NULL;
    this->Skill = ESkill::Invalid;
}

void UOnCausedDamage::OnCauseDamage(const FCauseDamageInfo& CauseDamageInfo) {
}


