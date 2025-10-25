#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IndianaAISystemInternalFunctionLibrary.generated.h"

class UIndianaAISystem;
class UObject;

UCLASS(Blueprintable)
class UIndianaAISystemInternalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIndianaAISystemInternalFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UIndianaAISystem* K2_GetIndianaAISystem(UObject* WorldContextObject);
    
};

