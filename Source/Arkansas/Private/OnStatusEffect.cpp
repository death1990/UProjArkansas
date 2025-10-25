#include "OnStatusEffect.h"

UOnStatusEffect::UOnStatusEffect() {
    this->EventType = EStatusEffectCheckType::SingleAdded;
    this->StatusEffect = NULL;
    this->StackCount = 0;
    this->HostileComparisonOperator = EComparisonOperator::Equals;
    this->NumHostileStatusEffects = 0;
}


