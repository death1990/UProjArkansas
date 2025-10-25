#include "SpellConditional_DistanceBetweenCasterAndTarget.h"

USpellConditional_DistanceBetweenCasterAndTarget::USpellConditional_DistanceBetweenCasterAndTarget() {
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
    this->Distance = 0.00f;
}


