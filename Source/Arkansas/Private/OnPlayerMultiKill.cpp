#include "OnPlayerMultiKill.h"

UOnPlayerMultiKill::UOnPlayerMultiKill() {
    this->MinNumKilled = 1;
    this->WeaponClass = NULL;
    this->bOnlyCountCharacters = false;
}

void UOnPlayerMultiKill::OnMultiKill(int32 NumKilled, const UWeapon* Weapon, int32 NumCharactersKilled) const {
}


