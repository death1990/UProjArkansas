#include "EnvQueryGenerator_FeetLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point

UEnvQueryGenerator_FeetLocation::UEnvQueryGenerator_FeetLocation() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}


