#include "EnvQueryGenerator_JitterGrid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryGenerator_JitterGrid::UEnvQueryGenerator_JitterGrid() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


