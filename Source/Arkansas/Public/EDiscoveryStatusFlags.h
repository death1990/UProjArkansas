#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryStatusFlags.generated.h"

UENUM(BlueprintType)
enum class EDiscoveryStatusFlags : uint8 {
    Aware,
    Visited,
    Locked,
    Hidden,
};

