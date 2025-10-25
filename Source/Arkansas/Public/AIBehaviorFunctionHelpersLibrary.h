#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionHelpersLibrary.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;
class UObject;
class UOwBlackboardComponent;

UCLASS(Blueprintable)
class UAIBehaviorFunctionHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBehaviorFunctionHelpersLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeferredDelegateBoundToObject(const FAIBehaviorFunctionContext& Context, const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeferredDelegateBound(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIndianaAiController* GetAIController(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIndianaAiCharacter* GetAICharacter(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOwBlackboardComponent* GetAIBlackboard(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static void CallDeferredDelegate(const FAIBehaviorFunctionContext& Context, const bool bResult);
    
};

