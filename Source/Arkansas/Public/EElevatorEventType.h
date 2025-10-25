#pragma once
#include "CoreMinimal.h"
#include "EElevatorEventType.generated.h"

UENUM(BlueprintType)
enum class EElevatorEventType : uint8 {
    Invalid,
    MoveStart,
    MoveEnd,
};

