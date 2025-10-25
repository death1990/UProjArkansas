#include "StatModifierDescriptionBase.h"

FStatModifierDescriptionBase::FStatModifierDescriptionBase() {
    this->RpgStat = NULL;
    this->Group = ERpgStatGroup::Character;
    this->ModifierType = EStatModifierType::PreAdd;
}

