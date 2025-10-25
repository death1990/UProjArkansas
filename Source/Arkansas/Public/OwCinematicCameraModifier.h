#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICinematics -ObjectName=OEICinematicCameraModifier -FallbackName=OEICinematicCameraModifier
#include "OwCinematicCameraModifier.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UOwCinematicCameraModifier : public UOEICinematicCameraModifier {
    GENERATED_BODY()
public:
    UOwCinematicCameraModifier();

};

