#include "OnSkillEndedEvent.h"

UOnSkillEndedEvent::UOnSkillEndedEvent() {
    this->Skill = ESkill::Invalid;
}

void UOnSkillEndedEvent::OnSkillEnded(AActor* Caster, ESkill SkillUsed, AActor* Target) const {
}


