#include "OnSkillCheckSuccess.h"

UOnSkillCheckSuccess::UOnSkillCheckSuccess() {
    this->Skill = ESkill::Invalid;
    this->XPReason = EXPGainReason::EnemyKilled;
}

void UOnSkillCheckSuccess::OnSkillCheckSuccess(EXPGainReason Reason, int32 XPEarned, ESkill SkillUsed) const {
}


