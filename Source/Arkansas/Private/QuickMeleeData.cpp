#include "QuickMeleeData.h"

UQuickMeleeData::UQuickMeleeData() {
    this->Cooldown = 0.00f;
    this->Time = 1.00f;
    this->StatusEffect = NULL;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->ImpactDataSet = NULL;
    this->WeaponEvent = EWeaponEvent::QuickMelee;
    this->WeaponEventTTD = EWeaponEvent::QuickMeleeTTD;
}


