#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CharacterScalingComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_CharacterScalingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_CharacterScalingComponent(const FObjectInitializer& ObjectInitializer);

};

