#include "SpellConditional_HasStatusEffect.h"

USpellConditional_HasStatusEffect::USpellConditional_HasStatusEffect() {
    this->StatusEffect = NULL;
    this->NumStacks = 1;
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
}


