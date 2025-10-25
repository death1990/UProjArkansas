#pragma once
#include "CoreMinimal.h"
#include "EDetectionMode.generated.h"

UENUM(BlueprintType)
enum class EDetectionMode : uint8 {
    Perception,
    PlayerProximity,
    None,
};

