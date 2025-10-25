#pragma once
#include "CoreMinimal.h"
#include "ESuperSampler.generated.h"

UENUM(BlueprintType)
enum class ESuperSampler : uint8 {
    None,
    TAA,
    TSR,
    FSR,
    XeSS,
    DLSS,
};

