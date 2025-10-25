#pragma once
#include "CoreMinimal.h"
#include "EHitRegion.generated.h"

UENUM(BlueprintType)
enum class EHitRegion : uint8 {
    None,
    Head,
    UpperBody,
    LowerBody,
};

