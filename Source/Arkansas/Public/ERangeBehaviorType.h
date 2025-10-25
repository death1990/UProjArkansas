#pragma once
#include "CoreMinimal.h"
#include "ERangeBehaviorType.generated.h"

UENUM(BlueprintType)
enum class ERangeBehaviorType : uint8 {
    Cover,
    Range,
    QuickRange,
    Stationary,
    PreferredRange,
    None,
};

