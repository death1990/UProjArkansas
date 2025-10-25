#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "EventEffectParams.h"
#include "CustomEventEffect.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UCustomEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
    UCustomEventEffect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomTrigger(AActor* TargetActor, const FEventEffectParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomStop(AActor* TargetActor);
    
};

