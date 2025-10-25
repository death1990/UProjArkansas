#pragma once
#include "CoreMinimal.h"
#include "ETrapResult.generated.h"

UENUM(BlueprintType)
enum class ETrapResult : uint8 {
    Success,
    Failed,
    Failed_Skill,
    Failed_Error,
    Pending_Arming,
    Pending_Disarming,
};

