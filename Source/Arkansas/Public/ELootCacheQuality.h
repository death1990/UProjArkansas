#pragma once
#include "CoreMinimal.h"
#include "ELootCacheQuality.generated.h"

UENUM(BlueprintType)
enum class ELootCacheQuality : uint8 {
    Trivial,
    Low,
    Moderate,
    High,
    Extreme,
};

