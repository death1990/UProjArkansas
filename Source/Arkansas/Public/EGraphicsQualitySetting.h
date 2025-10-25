#pragma once
#include "CoreMinimal.h"
#include "EGraphicsQualitySetting.generated.h"

UENUM(BlueprintType)
enum class EGraphicsQualitySetting : uint8 {
    Low,
    Medium,
    High,
    VeryHigh,
    Custom,
};

