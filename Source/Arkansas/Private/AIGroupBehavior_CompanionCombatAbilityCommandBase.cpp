#include "AIGroupBehavior_CompanionCombatAbilityCommandBase.h"
#include "EAIGroupBehaviorCategory.h"

UAIGroupBehavior_CompanionCombatAbilityCommandBase::UAIGroupBehavior_CompanionCombatAbilityCommandBase() {
    this->Category = EAIGroupBehaviorCategory::CompanionCommand_SpecialAbility;
    this->bHasCriticalSection = true;
    this->TargetType = ECompanionCombatAbilityTargetType::PlayerAimTarget;
    this->ActivationSoundRadius = 1500.00f;
    this->SoundStrength = 80.00f;
    this->AbilitySuccessAudioTiming = ECompanionCombatAbilitySuccessAudioTiming::PlayOnGroupBehaviorStart;
}


