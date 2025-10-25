#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EQSContext_Companions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEQSContext_Companions : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQSContext_Companions();

};

