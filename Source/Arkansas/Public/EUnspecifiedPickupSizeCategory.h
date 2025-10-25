#pragma once
#include "CoreMinimal.h"
#include "EUnspecifiedPickupSizeCategory.generated.h"

UENUM(BlueprintType)
enum class EUnspecifiedPickupSizeCategory : uint8 {
    Small,
    Medium,
    Large,
    ExtraLarge,
    Invalid,
};

