#include "EnvQueryTest_NavArea.h"

UEnvQueryTest_NavArea::UEnvQueryTest_NavArea() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


