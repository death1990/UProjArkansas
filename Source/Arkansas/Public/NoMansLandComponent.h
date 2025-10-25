#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NoMansLandComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNoMansLandComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UNoMansLandComponent(const FObjectInitializer& ObjectInitializer);

};

