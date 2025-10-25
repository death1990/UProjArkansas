#pragma once
#include "CoreMinimal.h"
#include "EFSR3QualityMode.generated.h"

UENUM(BlueprintType)
enum class EFSR3QualityMode : uint8 {
    Native,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

