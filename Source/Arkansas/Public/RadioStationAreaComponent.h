#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "RadioStationAreaComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URadioStationAreaComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URadioStationAreaComponent(const FObjectInitializer& ObjectInitializer);

};

