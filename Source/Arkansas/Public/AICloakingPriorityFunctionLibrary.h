#pragma once
#include "CoreMinimal.h"
#include "EPriorityNodeValue.h"
#include "PriorityNodeFunctionLibrary.h"
#include "PriorityNodeHandle.h"
#include "AICloakingPriorityFunctionLibrary.generated.h"

class AIndianaAiController;

UCLASS(Blueprintable)
class ARKANSAS_API UAICloakingPriorityFunctionLibrary : public UPriorityNodeFunctionLibrary {
    GENERATED_BODY()
public:
    UAICloakingPriorityFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle EnableCloak(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DisableCloak(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
};

