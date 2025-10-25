#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraComponent -FallbackName=CineCameraComponent
#include "OEICineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOEICineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UOEICineCameraComponent(const FObjectInitializer& ObjectInitializer);

};

