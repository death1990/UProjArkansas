#include "CompanionStateConditional.h"

FCompanionStateConditional::FCompanionStateConditional() {
    this->CompanionToCheck = ESpecialObsidianID::None;
    this->Operator = EEqualityComparison::Equal;
    this->ComparisonState = ECompanionState::CompanionNotRecruited;
    this->bDefault = false;
}

