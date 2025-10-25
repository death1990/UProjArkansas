#pragma once
#include "CoreMinimal.h"
#include "EStationaryRotationType.generated.h"

UENUM(BlueprintType)
enum class EStationaryRotationType : uint8 {
    None,
    OutOfCombatOnly,
    AlwaysDuringTurns,
    Always,
};

