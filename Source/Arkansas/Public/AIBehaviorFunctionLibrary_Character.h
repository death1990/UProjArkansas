#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionLibrary.h"
#include "EAIBehaviorFunctionResult.h"
#include "ETrackingRegion.h"
#include "AIBehaviorFunctionLibrary_Character.generated.h"

UCLASS(Blueprintable)
class UAIBehaviorFunctionLibrary_Character : public UAIBehaviorFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBehaviorFunctionLibrary_Character();

    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult WaitForRegionRotation(const FAIBehaviorFunctionContext& Context, const TEnumAsByte<ETrackingRegion> Region, const float DeltaDegrees);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult ResurrectNPC(const FAIBehaviorFunctionContext& Context, const float ToHealthPercentage);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult HandleGoingDownState(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult HandleDyingState(const FAIBehaviorFunctionContext& Context);
    
};

