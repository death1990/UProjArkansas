#pragma once
#include "CoreMinimal.h"
#include "ELatencyReductionMethod.generated.h"

UENUM(BlueprintType)
enum class ELatencyReductionMethod : uint8 {
    None,
    Reflex,
    XeLL,
};

