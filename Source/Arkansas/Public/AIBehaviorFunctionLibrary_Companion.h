#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionLibrary.h"
#include "EAIBehaviorFunctionResult.h"
#include "AIBehaviorFunctionLibrary_Companion.generated.h"

UCLASS(Blueprintable)
class UAIBehaviorFunctionLibrary_Companion : public UAIBehaviorFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBehaviorFunctionLibrary_Companion();

    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult ExecuteTeleportRequest(const FAIBehaviorFunctionContext& Context, const bool bClearTargetDetection, const float ClearTargetRange);
    
};

