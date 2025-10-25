#include "SkillRequirement.h"

USkillRequirement::USkillRequirement() {
    this->Skill = ESkill::Invalid;
    this->SkillDifficultyRange = ESkillDifficultyRange::Cosmetic;
    this->bForceSkillCheckTier = false;
    this->ForcedSkillCheckTier = ESkillDifficultyTier::One;
    this->OverrideSkillValue = 0;
}


