#pragma once
#include "CoreMinimal.h"
#include "CanSwitchToTargetDelegateDelegate.h"
#include "CompareDetectedTargetsDelegateDelegate.h"
#include "DynamicOverridePrimaryTargetDelegateDelegate.h"
#include "EPriorityNodeValue.h"
#include "PriorityNodeFunctionLibrary.h"
#include "PriorityNodeHandle.h"
#include "AITargetInfoPriorityFunctionLibrary.generated.h"

class AActor;
class AIndianaAiController;

UCLASS(Blueprintable)
class ARKANSAS_API UAITargetInfoPriorityFunctionLibrary : public UPriorityNodeFunctionLibrary {
    GENERATED_BODY()
public:
    UAITargetInfoPriorityFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle SetDetectedTargetComparisonLogic(AIndianaAiController* Controller, EPriorityNodeValue Priority, FCompareDetectedTargetsDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle SetCanSwitchToTargetLogic(AIndianaAiController* Controller, EPriorityNodeValue Priority, FCanSwitchToTargetDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle OverridePrimaryTarget(AIndianaAiController* Controller, EPriorityNodeValue Priority, FDynamicOverridePrimaryTargetDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle ForceOverridePrimaryTarget(AIndianaAiController* Controller, EPriorityNodeValue Priority, AActor* ForcedTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DisableTargeting(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
};

