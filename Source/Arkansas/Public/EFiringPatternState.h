#pragma once
#include "CoreMinimal.h"
#include "EFiringPatternState.generated.h"

UENUM(BlueprintType)
enum class EFiringPatternState : uint8 {
    NoWeaponWaiting,
    PrePause,
    StartPause,
    Burst,
    BurstAnimation,
    BurstPause,
    EndPause,
    Invalid,
};

