#pragma once
#include "CoreMinimal.h"
#include "EReputationRankType.generated.h"

UENUM(BlueprintType)
enum class EReputationRankType : uint8 {
    Bad,
    Mixed,
    Default,
    Good,
};

