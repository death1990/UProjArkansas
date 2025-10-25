#include "SpellConditional_IsDistanceToTarget.h"

USpellConditional_IsDistanceToTarget::USpellConditional_IsDistanceToTarget() {
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
    this->Distance = 0.00f;
}


