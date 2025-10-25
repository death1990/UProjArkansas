#pragma once
#include "CoreMinimal.h"
#include "EAITokenTriggerType.generated.h"

UENUM(BlueprintType)
enum class EAITokenTriggerType : uint8 {
    MaximumTimeBetween,
    Immobile,
    Mobile,
    Unseen,
    Search,
    LinkedToToken,
    External,
    ExternalIgnoreCooldown,
    SearchImpossible,
    Count,
};

