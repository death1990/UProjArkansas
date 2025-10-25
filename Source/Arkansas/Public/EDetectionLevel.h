#pragma once
#include "CoreMinimal.h"
#include "EDetectionLevel.generated.h"

UENUM(BlueprintType)
enum class EDetectionLevel : uint8 {
    Hidden,
    Caution,
    Detected,
    Count,
};

