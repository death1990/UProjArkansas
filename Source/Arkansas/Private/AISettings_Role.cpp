#include "AISettings_Role.h"

UAISettings_Role::UAISettings_Role() {
    this->bCanFlank = true;
    this->CoverReUseProbability = 1.00f;
    this->MaxCoverReUseCount = 0;
    this->LostTargetWaitTime = ELostTargetWaitTime::Short;
    this->SearchMode = ELostTargetSearchMode::DirectSearch;
    this->DefensiveActionProbabilityScalar = 1.00f;
    this->CautiousBehavior = ECautiousBehaviorType::WanderSearch;
}


