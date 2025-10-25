#include "EnvQueryTest_ValidCover.h"

UEnvQueryTest_ValidCover::UEnvQueryTest_ValidCover() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->EnemyLocationOverrideContext = NULL;
    this->EnemyAimLocationsOverrideContext = NULL;
}


