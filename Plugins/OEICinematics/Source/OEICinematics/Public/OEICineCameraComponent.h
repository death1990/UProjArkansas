#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraComponent -FallbackName=CineCameraComponent
#include "CineCameraComponent.h"

#include "OEICineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEICINEMATICS_API UOEICineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UOEICineCameraComponent();

};

