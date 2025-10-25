#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "EnvironmentalSpaceVolume.generated.h"

UCLASS(Blueprintable)
class AEnvironmentalSpaceVolume : public AVolume {
    GENERATED_BODY()
public:
    AEnvironmentalSpaceVolume(const FObjectInitializer& ObjectInitializer);

};

