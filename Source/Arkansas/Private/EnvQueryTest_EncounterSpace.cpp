#include "EnvQueryTest_EncounterSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_EncounterSpace::UEnvQueryTest_EncounterSpace() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->EncounterContext = UEnvQueryContext_Querier::StaticClass();
}


