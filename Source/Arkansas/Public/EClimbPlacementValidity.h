#pragma once
#include "CoreMinimal.h"
#include "EClimbPlacementValidity.generated.h"

UENUM(BlueprintType)
enum class EClimbPlacementValidity : uint8 {
    Valid,
    InvalidStart,
    InvalidExit,
    InvalidStartExit,
};

