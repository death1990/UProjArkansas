#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EQSContext_CompanionCommandForward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEQSContext_CompanionCommandForward : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQSContext_CompanionCommandForward();

};

