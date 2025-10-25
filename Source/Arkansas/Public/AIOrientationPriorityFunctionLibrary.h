#pragma once
#include "CoreMinimal.h"
#include "AIOrientationControl.h"
#include "AIOrientationPriorityControlPollDelegate.h"
#include "EPriorityNodeValue.h"
#include "PriorityNodeFunctionLibrary.h"
#include "PriorityNodeHandle.h"
#include "AIOrientationPriorityFunctionLibrary.generated.h"

class AIndianaAiController;

UCLASS(Blueprintable)
class ARKANSAS_API UAIOrientationPriorityFunctionLibrary : public UPriorityNodeFunctionLibrary {
    GENERATED_BODY()
public:
    UAIOrientationPriorityFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle SetHeadOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationControl AIOrientationControl);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle SetEyesOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationControl AIOrientationControl);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle SetBodyOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationControl AIOrientationControl);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle SetAimOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationControl AIOrientationControl);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle PollHeadOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationPriorityControlPoll AIOrientationControlPoll);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle PollEyesOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationPriorityControlPoll AIOrientationControlPoll);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle PollBodyOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationPriorityControlPoll AIOrientationControlPoll);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle PollAimOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIOrientationPriorityControlPoll AIOrientationControlPoll);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DisableHeadOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DisableEyesOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DisableBodyOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DisableAimOrientationControl(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
};

