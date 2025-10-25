#pragma once
#include "CoreMinimal.h"
#include "EBountyAdjustment.generated.h"

UENUM(BlueprintType)
enum class EBountyAdjustment : uint8 {
    Tiny,
    Minor,
    Moderate,
    Major,
    Extreme,
    Override,
    Count,
};

