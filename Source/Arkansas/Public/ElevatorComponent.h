#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ElevatorComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UElevatorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UElevatorComponent(const FObjectInitializer& ObjectInitializer);

};

