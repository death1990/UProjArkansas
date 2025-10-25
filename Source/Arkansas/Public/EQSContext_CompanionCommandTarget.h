#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EQSContext_CompanionCommandTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEQSContext_CompanionCommandTarget : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQSContext_CompanionCommandTarget();

};

