#include "EnvQueryTest_ValidCoverFire.h"

UEnvQueryTest_ValidCoverFire::UEnvQueryTest_ValidCoverFire() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->EnemyLocationOverrideContext = NULL;
    this->EnemyAimLocationsOverrideContext = NULL;
}


