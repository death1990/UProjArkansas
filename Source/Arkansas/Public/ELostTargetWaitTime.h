#pragma once
#include "CoreMinimal.h"
#include "ELostTargetWaitTime.generated.h"

UENUM(BlueprintType)
enum class ELostTargetWaitTime : uint8 {
    Invalid,
    VeryShort,
    Short,
    Medium,
    Long,
};

