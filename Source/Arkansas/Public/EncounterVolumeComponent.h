#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EncounterVolumeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEncounterVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEncounterVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

