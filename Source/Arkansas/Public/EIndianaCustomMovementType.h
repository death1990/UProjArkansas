#pragma once
#include "CoreMinimal.h"
#include "EIndianaCustomMovementType.generated.h"

UENUM(BlueprintType)
enum class EIndianaCustomMovementType : uint8 {
    Climbing,
    Parkour,
    DropDown,
    AnimProxy,
    MotionWarp,
    ForcedSplineMove,
    JumpAcross,
    Burrow,
    RootMotionOnly,
};

