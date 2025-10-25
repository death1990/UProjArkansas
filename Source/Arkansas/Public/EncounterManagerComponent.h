#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EncounterManagerComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEncounterManagerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEncounterManagerComponent(const FObjectInitializer& ObjectInitializer);

};

