#include "EnvQueryTest_IsLineClear.h"

UEnvQueryTest_IsLineClear::UEnvQueryTest_IsLineClear() {
    this->TestPurpose = EEnvTestPurpose::Score;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


