#include "EnvQueryTest_NavmeshRaycast.h"

UEnvQueryTest_NavmeshRaycast::UEnvQueryTest_NavmeshRaycast() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DestinationContext = NULL;
}


