#include "EnvQueryGenerator_HardPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryGenerator_HardPoint::UEnvQueryGenerator_HardPoint() {
    this->SampleOriginContext = UEnvQueryContext_Querier::StaticClass();
    this->HardPointContext = UEnvQueryContext_Querier::StaticClass();
}


