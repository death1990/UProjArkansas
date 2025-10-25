#pragma once
#include "CoreMinimal.h"
#include "EncounterWaveCompleteDelegate.generated.h"

class AEncounter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterWaveComplete, AEncounter*, Encounter, int32, WaveIndex);

