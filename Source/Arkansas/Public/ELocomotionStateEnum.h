#pragma once
#include "CoreMinimal.h"
#include "ELocomotionStateEnum.generated.h"

UENUM(BlueprintType)
enum class ELocomotionStateEnum : uint8 {
    Idle,
    TurningInPlace,
    WalkStart,
    Walk,
    Run,
    WalkStop,
    WalkStopTranstion,
    WalkRunTransition,
    RunWalkTransition,
    RunStart,
    RunStop,
    SprintStart,
    SprintStop,
};

