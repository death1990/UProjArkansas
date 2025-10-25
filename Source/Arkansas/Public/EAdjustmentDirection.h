#pragma once
#include "CoreMinimal.h"
#include "EAdjustmentDirection.generated.h"

UENUM(BlueprintType)
enum class EAdjustmentDirection : uint8 {
    Neutral,
    Positive,
    Negative,
};

