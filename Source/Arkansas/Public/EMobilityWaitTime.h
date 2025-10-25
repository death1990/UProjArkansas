#pragma once
#include "CoreMinimal.h"
#include "EMobilityWaitTime.generated.h"

UENUM(BlueprintType)
enum class EMobilityWaitTime : uint8 {
    VeryShort,
    Short,
    Medium,
    Long,
    Count,
};

