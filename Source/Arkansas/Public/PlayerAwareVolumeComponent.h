#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PlayerAwareVolumeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerAwareVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPlayerAwareVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

