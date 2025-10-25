#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttributeRange.generated.h"

UENUM(BlueprintType)
enum class ECharacterAttributeRange : uint8 {
    Minimum,
    BelowAverage,
    Average,
    Good,
    High,
    VeryHigh,
    Maximum,
    Count,
    Invalid,
};

