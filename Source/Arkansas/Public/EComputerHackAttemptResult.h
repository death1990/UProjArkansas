#pragma once
#include "CoreMinimal.h"
#include "EComputerHackAttemptResult.generated.h"

UENUM(BlueprintType)
enum class EComputerHackAttemptResult : uint8 {
    Success,
    Failed_NoKey,
    Failed_NoResource,
    Failed_SkillInsufficient,
    Failed_NotHackable,
    Failed_Error,
};

