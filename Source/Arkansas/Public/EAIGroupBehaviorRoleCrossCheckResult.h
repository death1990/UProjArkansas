#pragma once
#include "CoreMinimal.h"
#include "EAIGroupBehaviorRoleCrossCheckResult.generated.h"

UENUM(BlueprintType)
enum class EAIGroupBehaviorRoleCrossCheckResult : uint8 {
    KeepBoth,
    DropOnlyRoleA,
    DropOnlyRoleB,
    DropBoth,
};

