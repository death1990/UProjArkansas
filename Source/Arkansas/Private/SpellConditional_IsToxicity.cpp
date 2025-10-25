#include "SpellConditional_IsToxicity.h"

USpellConditional_IsToxicity::USpellConditional_IsToxicity() {
    this->Value = 0.00f;
    this->bUsePercentage = false;
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
}


