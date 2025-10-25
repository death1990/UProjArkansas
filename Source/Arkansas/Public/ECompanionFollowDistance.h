#pragma once
#include "CoreMinimal.h"
#include "ECompanionFollowDistance.generated.h"

UENUM(BlueprintType)
enum class ECompanionFollowDistance : uint8 {
    Close,
    Medium,
    Far,
    Count,
    Invalid = Count,
};

