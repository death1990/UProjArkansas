#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EventEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEventEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEventEffectComponent(const FObjectInitializer& ObjectInitializer);

};

