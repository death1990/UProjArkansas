#pragma once
#include "CoreMinimal.h"
#include "EStandingAdjustment.generated.h"

UENUM(BlueprintType)
enum class EStandingAdjustment : uint8 {
    Minor,
    Moderate,
    Major,
    Custom,
    Count,
};

