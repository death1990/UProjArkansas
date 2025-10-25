#pragma once
#include "CoreMinimal.h"
#include "EPriorityNodeValue.h"
#include "PriorityNodeFunctionLibrary.h"
#include "PriorityNodeHandle.h"
#include "GenericPriorityFunctionLibrary.generated.h"

class AIndianaAiController;

UCLASS(Blueprintable)
class ARKANSAS_API UGenericPriorityFunctionLibrary : public UPriorityNodeFunctionLibrary {
    GENERATED_BODY()
public:
    UGenericPriorityFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle GenericPriority(AIndianaAiController* Controller, EPriorityNodeValue Priority, FName Category);
    
};

