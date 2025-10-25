#include "FactionRequirement.h"

UFactionRequirement::UFactionRequirement() {
    this->RequiredStandingFaction = NULL;
    this->RequiredStandingType = EStandingType::Positive;
    this->RequiredStandingLevel = EStandingLevel::None;
    this->RequiredStandingOperator = EComparisonOperator::Equals;
}


