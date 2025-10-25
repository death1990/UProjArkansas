#include "MeleeSequencer.h"

UMeleeSequencer::UMeleeSequencer() {
    this->Owner = NULL;
    this->ParentWeapon = NULL;
    this->StatComponent = NULL;
    this->BlockComponent = NULL;
}

void UMeleeSequencer::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UMeleeSequencer::OnAbilityUnlocked(EUnlockAbility Ability) {
}


