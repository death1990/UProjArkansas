#include "EnvQueryTest_NavmeshConnectivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_NavmeshConnectivity::UEnvQueryTest_NavmeshConnectivity() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DestinationContext = UEnvQueryContext_Querier::StaticClass();
    this->PatherContext = UEnvQueryContext_Querier::StaticClass();
    this->bCheckNavLinks = true;
    this->bCheckElevators = false;
}


