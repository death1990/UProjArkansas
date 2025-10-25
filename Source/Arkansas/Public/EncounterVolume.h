#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "EncounterVolume.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AEncounterVolume : public AVolume {
    GENERATED_BODY()
public:
    AEncounterVolume(const FObjectInitializer& ObjectInitializer);

};

