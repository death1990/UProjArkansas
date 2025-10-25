#pragma once
#include "CoreMinimal.h"
#include "ETurretFireState.generated.h"

UENUM(BlueprintType)
enum class ETurretFireState : uint8 {
    None,
    Firing,
    StartPause,
    BurstPause,
    EndPause,
};

