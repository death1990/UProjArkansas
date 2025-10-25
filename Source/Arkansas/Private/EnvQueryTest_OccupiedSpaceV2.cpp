#include "EnvQueryTest_OccupiedSpaceV2.h"

UEnvQueryTest_OccupiedSpaceV2::UEnvQueryTest_OccupiedSpaceV2() {
    this->TestPurpose = EEnvTestPurpose::Score;
    this->FilterType = EEnvTestFilterType::Maximum;
    this->ScoringEquation = EEnvTestScoreEquation::InverseLinear;
}


