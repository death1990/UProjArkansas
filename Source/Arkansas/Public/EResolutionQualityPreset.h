#pragma once
#include "CoreMinimal.h"
#include "EResolutionQualityPreset.generated.h"

UENUM(BlueprintType)
enum class EResolutionQualityPreset : uint8 {
    Low,
    Medium,
    High,
    Native,
    Custom,
};

