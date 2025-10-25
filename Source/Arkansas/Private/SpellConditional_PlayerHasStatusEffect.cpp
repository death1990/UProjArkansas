#include "SpellConditional_PlayerHasStatusEffect.h"

USpellConditional_PlayerHasStatusEffect::USpellConditional_PlayerHasStatusEffect() {
    this->StatusEffect = NULL;
    this->NumStacks = 1;
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
}


