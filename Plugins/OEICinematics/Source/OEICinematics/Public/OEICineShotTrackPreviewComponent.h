#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OEICineShotTrackPreviewComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEICINEMATICS_API UOEICineShotTrackPreviewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOEICineShotTrackPreviewComponent(const FObjectInitializer& ObjectInitializer);

};

