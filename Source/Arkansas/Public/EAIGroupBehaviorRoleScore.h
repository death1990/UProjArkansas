#pragma once
#include "CoreMinimal.h"
#include "EAIGroupBehaviorRoleScore.generated.h"

UENUM(BlueprintType)
enum class EAIGroupBehaviorRoleScore : uint8 {
    Highest,
    High,
    Average,
    Low,
    Lowest,
    UseRawScore,
};

