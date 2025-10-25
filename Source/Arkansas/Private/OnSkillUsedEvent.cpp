#include "OnSkillUsedEvent.h"

UOnSkillUsedEvent::UOnSkillUsedEvent() {
    this->Skill = ESkill::Invalid;
}

void UOnSkillUsedEvent::OnSkillUsed(AActor* Caster, ESkill SkillUsed, AActor* Target) const {
}


