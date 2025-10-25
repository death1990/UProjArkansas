#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionLibrary.h"
#include "EAIBehaviorFunctionResult.h"
#include "AIBehaviorFunctionLibrary_AnimationProxy.generated.h"

class AAnimationProxyActor;

UCLASS(Blueprintable)
class UAIBehaviorFunctionLibrary_AnimationProxy : public UAIBehaviorFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBehaviorFunctionLibrary_AnimationProxy();

    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult ReserveAnimationProxyActor(const FAIBehaviorFunctionContext& Context, AAnimationProxyActor* AnimationProxyActor);
    
};

