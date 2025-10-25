#pragma once
#include "CoreMinimal.h"
#include "EOWDLSSMode.generated.h"

UENUM(BlueprintType)
enum class EOWDLSSMode : uint8 {
    Off,
    Auto,
    DLAA,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

