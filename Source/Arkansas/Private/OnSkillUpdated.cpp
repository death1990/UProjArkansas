#include "OnSkillUpdated.h"

UOnSkillUpdated::UOnSkillUpdated() {
    this->ListenSkill = ESkill::Invalid;
    this->bCompare = false;
    this->Operator = EComparisonOperator::Equals;
    this->SkillValue = 0;
}

void UOnSkillUpdated::OnSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill Skill, int32 NewValue) {
}


