#include "EnvQueryTest_HardPoint.h"

UEnvQueryTest_HardPoint::UEnvQueryTest_HardPoint() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->HardPointContext = NULL;
}


