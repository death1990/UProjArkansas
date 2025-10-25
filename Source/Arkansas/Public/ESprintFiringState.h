#pragma once
#include "CoreMinimal.h"
#include "ESprintFiringState.generated.h"

UENUM(BlueprintType)
enum class ESprintFiringState : uint8 {
    NotSprinting,
    Sprinting,
    TransitioningToSprintFiring,
    SprintFireHolding,
    TransitioningToSprinting,
};

