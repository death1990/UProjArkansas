#include "SpellConditional_IsStatValue.h"

USpellConditional_IsStatValue::USpellConditional_IsStatValue() {
    this->Stat = NULL;
    this->Operator = EComparisonOperator::Count;
    this->Value = 0.00f;
}


