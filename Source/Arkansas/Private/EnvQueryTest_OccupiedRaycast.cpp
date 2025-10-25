#include "EnvQueryTest_OccupiedRaycast.h"

UEnvQueryTest_OccupiedRaycast::UEnvQueryTest_OccupiedRaycast() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DestinationContext = NULL;
    this->OccupationChannel = EOccupationChannel::Firing;
}


