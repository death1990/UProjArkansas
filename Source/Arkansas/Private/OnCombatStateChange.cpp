#include "OnCombatStateChange.h"

UOnCombatStateChange::UOnCombatStateChange() {
    this->bCombat = false;
    this->bHasLivingEnemies = false;
}

void UOnCombatStateChange::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}


