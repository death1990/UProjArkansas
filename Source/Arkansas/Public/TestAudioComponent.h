#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TestAudioComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_TestAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_TestAudioComponent(const FObjectInitializer& ObjectInitializer);

};

