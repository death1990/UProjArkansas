#pragma once
#include "CoreMinimal.h"
#include "ELocomotionSlot.generated.h"

UENUM(BlueprintType)
enum class ELocomotionSlot : uint8 {
    LS_SingleFire,
    LS_WalkStart,
    LS_RunStart,
    LS_WalkStop,
};

