#include "SpellConditional_MinSkill.h"

USpellConditional_MinSkill::USpellConditional_MinSkill() {
    this->Skill = ESkill::Invalid;
    this->MinSkill = 1;
    this->MinSkillStat = NULL;
}


