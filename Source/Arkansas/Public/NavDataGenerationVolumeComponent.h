#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NavDataGenerationVolumeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNavDataGenerationVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UNavDataGenerationVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

