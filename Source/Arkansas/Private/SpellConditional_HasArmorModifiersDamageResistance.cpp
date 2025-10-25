#include "SpellConditional_HasArmorModifiersDamageResistance.h"

USpellConditional_HasArmorModifiersDamageResistance::USpellConditional_HasArmorModifiersDamageResistance() {
    this->TargetValue = 0;
    this->Operator = EComparisonOperator::GreaterThanOrEquals;
}


