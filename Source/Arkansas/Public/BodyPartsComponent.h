#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BodyPartsComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_BodyPartsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_BodyPartsComponent(const FObjectInitializer& ObjectInitializer);

};

