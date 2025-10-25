#pragma once
#include "CoreMinimal.h"
#include "EEncounterWaveState.generated.h"

UENUM(BlueprintType)
enum class EEncounterWaveState : uint8 {
    Inactive,
    Spawning,
    Static,
    Paused,
    Completed,
};

