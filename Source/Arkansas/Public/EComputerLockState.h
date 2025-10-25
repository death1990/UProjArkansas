#pragma once
#include "CoreMinimal.h"
#include "EComputerLockState.generated.h"

UENUM(BlueprintType)
enum class EComputerLockState : uint8 {
    Unlocked,
    Locked,
};

