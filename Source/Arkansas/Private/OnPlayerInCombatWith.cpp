#include "OnPlayerInCombatWith.h"

UOnPlayerInCombatWith::UOnPlayerInCombatWith() {
    this->FactionData = NULL;
    this->bInvertFactionRequirement = false;
    this->bInverse = false;
}

void UOnPlayerInCombatWith::OnPlayerInCombatWith(AIndianaCharacter* Character, bool bAdded) {
}


