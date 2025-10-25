#pragma once
#include "CoreMinimal.h"
#include "EPoolableNotificationType.generated.h"

UENUM(BlueprintType)
enum class EPoolableNotificationType : uint8 {
    EnemyKilledXP,
    ReputationGained,
    ReputationLost,
    ItemSalvageWithCount,
    ItemAdded,
    ItemRemoved,
    Invalid,
};

