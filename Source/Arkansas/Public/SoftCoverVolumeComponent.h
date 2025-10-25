#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SoftCoverVolumeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USoftCoverVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USoftCoverVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

