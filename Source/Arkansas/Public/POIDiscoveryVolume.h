#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "POIDiscoveryVolume.generated.h"

UCLASS(Blueprintable)
class APOIDiscoveryVolume : public AVolume {
    GENERATED_BODY()
public:
    APOIDiscoveryVolume(const FObjectInitializer& ObjectInitializer);

};

