#pragma once
#include "CoreMinimal.h"
#include "EMinimapNPCType.generated.h"

UENUM(BlueprintType)
enum class EMinimapNPCType : uint8 {
    INVALID,
    EAlwaysNeutral,
    ENeutral,
    EHostile,
    ECompanion,
    EDeadCompanion,
    EDeadLootable,
};

