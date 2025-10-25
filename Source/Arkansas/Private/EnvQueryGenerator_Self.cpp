#include "EnvQueryGenerator_Self.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Actor -FallbackName=EnvQueryItemType_Actor

UEnvQueryGenerator_Self::UEnvQueryGenerator_Self() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


