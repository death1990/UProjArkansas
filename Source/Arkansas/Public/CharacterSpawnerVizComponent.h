#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CharacterSpawnerVizComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterSpawnerVizComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCharacterSpawnerVizComponent(const FObjectInitializer& ObjectInitializer);

};

