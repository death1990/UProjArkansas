#pragma once
#include "CoreMinimal.h"
#include "ERankAdjustment.generated.h"

UENUM(BlueprintType)
enum class ERankAdjustment : uint8 {
    Minor,
    Moderate,
    Major,
    Custom,
    Count,
};

