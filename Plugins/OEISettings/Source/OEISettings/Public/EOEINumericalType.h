#pragma once
#include "CoreMinimal.h"
#include "EOEINumericalType.generated.h"

UENUM(BlueprintType)
enum class EOEINumericalType : uint8 {
    Default,
    Percent,
    NormalizePercent,
};

