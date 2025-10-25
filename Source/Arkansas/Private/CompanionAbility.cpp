#include "CompanionAbility.h"

UCompanionAbility::UCompanionAbility() {
    this->CombatAbilityCommandBehaviorClass = NULL;
    this->Cooldown = 1.00f;
    this->CooldownDrainTime = 1.00f;
    this->MaxChargeCount = 1;
}


