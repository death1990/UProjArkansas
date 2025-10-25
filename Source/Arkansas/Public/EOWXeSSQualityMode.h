#pragma once
#include "CoreMinimal.h"
#include "EOWXeSSQualityMode.generated.h"

UENUM(BlueprintType)
enum class EOWXeSSQualityMode : uint8 {
    Off,
    UltraPerformance,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
    UltraQualityPlus,
    AntiAliasing,
};

