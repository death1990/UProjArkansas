#include "OnHitStatusEffects.h"

FOnHitStatusEffects::FOnHitStatusEffects() {
    this->Skill = ESkill::Melee;
    this->SkillModifierStat = NULL;
    this->MinSkill = 0;
    this->Chance = 0;
    this->StatusEffect = NULL;
    this->bAlwaysApply = false;
}

