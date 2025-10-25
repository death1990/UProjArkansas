#include "StatModifierStatusEffect.h"

UStatModifierStatusEffect::UStatModifierStatusEffect() {
    this->bReapplyOnSkillChange = false;
    this->bAllowStackingWithAttackFilterConditionals = false;
}

void UStatModifierStatusEffect::OnSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill UpdatedSkill, int32 NewValue) {
}


