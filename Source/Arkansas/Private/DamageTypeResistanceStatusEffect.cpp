#include "DamageTypeResistanceStatusEffect.h"

UDamageTypeResistanceStatusEffect::UDamageTypeResistanceStatusEffect() {
    this->bClearStatusEffects = false;
    this->bUseSameDamageTypes = true;
    this->bAllDamageTypes = false;
    this->DefenseType = EDamageTypeDefense::Default;
    this->bUniqueDamageTypeDefenses = false;
}


