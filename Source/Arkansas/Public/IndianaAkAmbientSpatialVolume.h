#pragma once
#include "CoreMinimal.h"
#include "IndianaAkAmbientVolume.h"
#include "IndianaAkAmbientSpatialVolume.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_IndianaAkAmbientSpatialVolume : public AIndianaAkAmbientVolume {
    GENERATED_BODY()
public:
    ADEPRECATED_IndianaAkAmbientSpatialVolume(const FObjectInitializer& ObjectInitializer);

};

