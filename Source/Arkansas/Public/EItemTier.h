#pragma once
#include "CoreMinimal.h"
#include "EItemTier.generated.h"

UENUM(BlueprintType)
enum class EItemTier : uint8 {
    One,
    Two,
    Three,
    Four,
    Five,
    Count,
};

