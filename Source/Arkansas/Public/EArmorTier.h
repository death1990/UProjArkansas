#pragma once
#include "CoreMinimal.h"
#include "EArmorTier.generated.h"

UENUM(BlueprintType)
enum class EArmorTier : uint8 {
    One,
    Two,
    Three,
    Four,
    Five,
    Count,
};

