#pragma once
#include "CoreMinimal.h"
#include "EStandingType.generated.h"

UENUM(BlueprintType)
enum class EStandingType : uint8 {
    Positive,
    Mixed,
    Negative,
    Count,
};

