#pragma once
#include "CoreMinimal.h"
#include "EOCLEventType.generated.h"

UENUM(BlueprintType)
enum class EOCLEventType : uint8 {
    Invalid,
    Open,
    Opening,
    Closed,
    Closing,
    Unlocked,
    Barred,
    Locked,
    LockpickSuccess,
    LockpickInterrupted,
    Lockpick,
    TravelStart,
    Ambient,
    Unbarred,
    Unsealed,
    InteractLoopFinished,
};

