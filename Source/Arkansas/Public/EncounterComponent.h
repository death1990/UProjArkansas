#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EncounterComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEncounterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEncounterComponent(const FObjectInitializer& ObjectInitializer);

};

