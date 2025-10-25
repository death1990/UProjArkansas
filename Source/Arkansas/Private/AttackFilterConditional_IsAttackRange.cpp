#include "AttackFilterConditional_IsAttackRange.h"

UAttackFilterConditional_IsAttackRange::UAttackFilterConditional_IsAttackRange() {
    this->Range = 0.00f;
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
}


