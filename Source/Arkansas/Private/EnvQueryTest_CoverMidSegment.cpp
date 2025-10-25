#include "EnvQueryTest_CoverMidSegment.h"

UEnvQueryTest_CoverMidSegment::UEnvQueryTest_CoverMidSegment() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


