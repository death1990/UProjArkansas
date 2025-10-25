#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryInstanceBlueprintWrapper -FallbackName=EnvQueryInstanceBlueprintWrapper
#include "OwEnvQueryBlueprintWrapper.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOwEnvQueryBlueprintWrapper : public UEnvQueryInstanceBlueprintWrapper {
    GENERATED_BODY()
public:
    UOwEnvQueryBlueprintWrapper();

    UFUNCTION(BlueprintCallable)
    void AbortInstance();
    
};

