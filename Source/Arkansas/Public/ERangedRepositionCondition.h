#pragma once
#include "CoreMinimal.h"
#include "ERangedRepositionCondition.generated.h"

UENUM(BlueprintType)
enum class ERangedRepositionCondition : uint8 {
    None,
    TooNear,
    PreferredRange,
    TooFar,
};

