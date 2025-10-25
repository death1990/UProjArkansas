#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PriorityNodeHandle.h"
#include "PriorityNodeHelpers.generated.h"

UCLASS(Blueprintable)
class UPriorityNodeHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPriorityNodeHelpers();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPriorityNodeRunning(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPriorityNodeActivated(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool DeactivatePriorityNode(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle);
    
};

