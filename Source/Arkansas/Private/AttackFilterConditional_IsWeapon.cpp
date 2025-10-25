#include "AttackFilterConditional_IsWeapon.h"

UAttackFilterConditional_IsWeapon::UAttackFilterConditional_IsWeapon() {
    this->HasMods = EComparisonOperator::Count;
    this->ModCount = 0;
    this->bCompareMagPercent = false;
    this->MagPercent = 0.00f;
    this->MagPercentOperator = EComparisonOperator::GreaterThanOrEquals;
    this->Skill = ESkill::Invalid;
}


