#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MotionWarpPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMotionWarpPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UMotionWarpPointComponent(const FObjectInitializer& ObjectInitializer);

};

