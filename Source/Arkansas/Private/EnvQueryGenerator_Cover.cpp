#include "EnvQueryGenerator_Cover.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Actor -FallbackName=EnvQueryItemType_Actor

UEnvQueryGenerator_Cover::UEnvQueryGenerator_Cover() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->bUseOctree = true;
}


