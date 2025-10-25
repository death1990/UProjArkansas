#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EQSContext_IndianaBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEQSContext_IndianaBase : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQSContext_IndianaBase();

};

