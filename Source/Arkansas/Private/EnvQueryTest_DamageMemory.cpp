#include "EnvQueryTest_DamageMemory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_DamageMemory::UEnvQueryTest_DamageMemory() {
    this->TestPurpose = EEnvTestPurpose::Score;
    this->FilterType = EEnvTestFilterType::Maximum;
    this->ScoringEquation = EEnvTestScoreEquation::InverseLinear;
    this->DamageMemoryContext = UEnvQueryContext_Querier::StaticClass();
}


