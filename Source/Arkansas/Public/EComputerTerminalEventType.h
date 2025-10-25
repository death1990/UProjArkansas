#pragma once
#include "CoreMinimal.h"
#include "EComputerTerminalEventType.generated.h"

UENUM(BlueprintType)
enum class EComputerTerminalEventType : uint8 {
    Invalid,
    Use,
    Unlocked,
    UnlockAttemptedLocked,
    Locked,
    InsufficientSkill,
    HackSuccess,
    HackStart,
    HackInterrupted,
    InteractLoopFinished,
};

