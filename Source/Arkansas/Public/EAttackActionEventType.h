#pragma once
#include "CoreMinimal.h"
#include "EAttackActionEventType.generated.h"

UENUM(BlueprintType)
enum class EAttackActionEventType : uint8 {
    MeleeStart,
    MeleeAttackComplete,
    MeleeEnd,
    RangeAttackComplete,
    AnyAttackComplete,
};

