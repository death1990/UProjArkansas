#pragma once
#include "CoreMinimal.h"
#include "EAnimLadderState.generated.h"

UENUM(BlueprintType)
enum class EAnimLadderState : uint8 {
    EnterBottom,
    EnterTop,
    EnterJumping,
    ExitBottom,
    ExitTop,
    ExitJumping,
    Climbing,
    Sliding,
    Stationary,
    Holstering,
    Sprinting,
};

