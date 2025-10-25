#pragma once
#include "CoreMinimal.h"
#include "ETerminalLockState.generated.h"

UENUM(BlueprintType)
enum class ETerminalLockState : uint8 {
    Hacked,
    NotHacked,
    Unlocked,
    Locked,
};

