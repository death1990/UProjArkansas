#pragma once
#include "CoreMinimal.h"
#include "EOocProximityConversationValidityCheckResult.generated.h"

UENUM(BlueprintType)
enum class EOocProximityConversationValidityCheckResult : uint8 {
    InvalidAsset,
    FailedToFindFirstNode,
    Valid,
};

