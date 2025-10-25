#pragma once
#include "CoreMinimal.h"
#include "ECameraAngle.generated.h"

UENUM(BlueprintType)
enum class ECameraAngle : uint8 {
    EyeLevel,
    High,
    Low,
    Custom,
    Count,
};

