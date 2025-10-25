#pragma once
#include "CoreMinimal.h"
#include "EncounterWaveIndexMapping.generated.h"

class AEncounter;

USTRUCT(BlueprintType)
struct FEncounterWaveIndexMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEncounter* Encounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WaveIndices;
    
    ARKANSAS_API FEncounterWaveIndexMapping();
};

