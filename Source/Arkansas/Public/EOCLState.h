#pragma once
#include "CoreMinimal.h"
#include "EOCLState.generated.h"

UENUM(BlueprintType)
enum class EOCLState : uint8 {
    Closed,
    Open,
    Locked,
    SealedClosed,
    SealedOpen,
    Barred,
    Opening,
    OpeningToSealed,
    Closing,
    ClosingToSealed,
    ClosingToLocked,
    JammedClosed,
    JammedOpening,
    JammedTransition,
    Unjamming,
    Invalid,
};

