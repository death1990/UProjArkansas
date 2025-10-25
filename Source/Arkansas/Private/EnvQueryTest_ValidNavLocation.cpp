#include "EnvQueryTest_ValidNavLocation.h"

UEnvQueryTest_ValidNavLocation::UEnvQueryTest_ValidNavLocation() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->NavigationFlags = 0;
}


