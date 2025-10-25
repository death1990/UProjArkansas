#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.generated.h"

UENUM(BlueprintType)
enum class ENotificationType : uint8 {
    Quest,
    ComputerInteraction,
    SaveSuccessful,
    SaveFailed,
    Generic,
    Travel,
    PointOfInterest,
    Tooltip,
    ExpGained,
    Invalid,
};

