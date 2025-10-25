#pragma once
#include "CoreMinimal.h"
#include "ECameraTransformModifierPhase.generated.h"

UENUM(BlueprintType)
enum class ECameraTransformModifierPhase : uint8 {
    Delay,
    MotionIn,
    MotionOut,
    Finished,
};

