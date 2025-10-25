#include "SpellConditional_Health.h"

USpellConditional_Health::USpellConditional_Health() {
    this->Value = 0.00f;
    this->bUsePercentage = false;
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
}


