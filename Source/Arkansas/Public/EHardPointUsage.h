#pragma once
#include "CoreMinimal.h"
#include "EHardPointUsage.generated.h"

UENUM(BlueprintType)
enum class EHardPointUsage : uint8 {
    None,
    Timed,
    Infinite,
};

