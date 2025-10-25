#pragma once
#include "CoreMinimal.h"
#include "EncounterWaveActivatedDelegate.generated.h"

class AEncounter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterWaveActivated, AEncounter*, Encounter, int32, WaveIndex);

