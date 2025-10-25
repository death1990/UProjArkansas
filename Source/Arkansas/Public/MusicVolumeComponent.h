#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MusicVolumeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMusicVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UMusicVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

