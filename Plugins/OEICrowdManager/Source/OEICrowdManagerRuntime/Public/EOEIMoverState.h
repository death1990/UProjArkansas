#pragma once
#include "CoreMinimal.h"
#include "EOEIMoverState.generated.h"

UENUM(BlueprintType)
enum class EOEIMoverState : uint8 {
    Invalid,
    Stationary_Start,
    Stationary_Idle,
    Stationary_Request,
    Stationary_Loading,
    Stationary_Pathfinding,
    Stationary_Queued,
    Stationary_FledToAnimProxy,
    Mover_ExitingAnimProxy,
    Mover_MovingToAnimProxy,
    Mover_OrientingToAnimProxy,
    Mover_EnteringAnimProxy,
    Mover_Failed,
    Stationary_Reset,
    Stationary_ExitingProxyForCombat,
};

