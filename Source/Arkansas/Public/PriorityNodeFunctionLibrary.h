#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPriorityNodeValue.h"
#include "OnPriorityNodeStartedScriptDelegateDelegate.h"
#include "OnPriorityNodeStoppedScriptDelegateDelegate.h"
#include "OnPriorityNodeTickedScriptDelegateDelegate.h"
#include "PriorityNodeHandle.h"
#include "PriorityNodeListenerInterface.h"
#include "PriorityNodeFunctionLibrary.generated.h"

class AIndianaAiController;
class UObject;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UPriorityNodeFunctionLibrary : public UBlueprintFunctionLibrary, public IPriorityNodeListenerInterface {
    GENERATED_BODY()
public:
    UPriorityNodeFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable)
    static bool IsValid(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle DefaultFunctionSignature(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static bool Deactivate(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle);
    
    UFUNCTION(BlueprintCallable)
    static void AssignTickDelegates(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle, FOnPriorityNodeTickedScriptDelegate Tick);
    
    UFUNCTION(BlueprintCallable)
    static void AssignOutputDelegates(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle, FOnPriorityNodeStartedScriptDelegate Start, FOnPriorityNodeStoppedScriptDelegate Stop);
    
    UFUNCTION(BlueprintCallable)
    static bool Activate(UPARAM(Ref) FPriorityNodeHandle& PriorityNodeHandle, UObject* Owner, const FString& FromWhere);
    

    // Fix for true pure virtual functions not being implemented
};

