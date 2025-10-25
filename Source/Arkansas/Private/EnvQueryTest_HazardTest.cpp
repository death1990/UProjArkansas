#include "EnvQueryTest_HazardTest.h"

UEnvQueryTest_HazardTest::UEnvQueryTest_HazardTest() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->HazardContext = NULL;
}


