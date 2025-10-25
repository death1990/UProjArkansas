#include "GlobalVariableModifier.h"

FGlobalVariableModifier::FGlobalVariableModifier() {
    this->ModifierAmount = 0;
    this->ComparisonOperator = EComparisonOperator::Equals;
    this->GlobalValue = 0;
}

