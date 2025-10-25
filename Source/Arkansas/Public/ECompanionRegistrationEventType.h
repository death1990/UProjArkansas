#pragma once
#include "CoreMinimal.h"
#include "ECompanionRegistrationEventType.generated.h"

UENUM(BlueprintType)
enum class ECompanionRegistrationEventType : uint8 {
    Added,
    Changed,
    Removed,
    Unlocked,
    Dismissed,
};

