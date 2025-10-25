#include "DependentSettingsToBuild.h"

FDependentSettingsToBuild::FDependentSettingsToBuild() {
    this->DependentConditional = EComparisonOperator::Equals;
    this->ConditionalValue = 0.00f;
    this->ConditionalResponse = EDependentBehaviorType::None;
}

