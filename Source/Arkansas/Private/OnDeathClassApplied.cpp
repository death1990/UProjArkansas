#include "OnDeathClassApplied.h"
#include "Templates/SubclassOf.h"

UOnDeathClassApplied::UOnDeathClassApplied() {
    this->DeathClass = NULL;
    this->WeaponClass = NULL;
}

void UOnDeathClassApplied::OnDeathClassApplied(TSubclassOf<UDeathClass> InDeathClass, const UWeapon* Weapon) const {
}


