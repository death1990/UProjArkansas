#pragma once
#include "CoreMinimal.h"
#include "EVendorPages.generated.h"

UENUM(BlueprintType)
enum class EVendorPages : uint8 {
    Buy,
    Sell,
    Count,
};

