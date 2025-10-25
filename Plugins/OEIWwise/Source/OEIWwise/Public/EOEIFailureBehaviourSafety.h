#pragma once
#include "CoreMinimal.h"
#include "EOEIFailureBehaviourSafety.generated.h"

UENUM(BlueprintType)
enum class EOEIFailureBehaviourSafety : uint8 {
    None,
    ChanceToPlay = 2,
    FindClosestPoint = 4,
    WithinMinMaxDistance = 8,
};

