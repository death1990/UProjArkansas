#pragma once
#include "CoreMinimal.h"
#include "EncounterWaveTimerActivatedDelegate.generated.h"

class AEncounter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterWaveTimerActivated, AEncounter*, Encounter, int32, WaveIndex);

