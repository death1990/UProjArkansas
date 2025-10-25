#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PointOfInterestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPointOfInterestComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPointOfInterestComponent(const FObjectInitializer& ObjectInitializer);

};

