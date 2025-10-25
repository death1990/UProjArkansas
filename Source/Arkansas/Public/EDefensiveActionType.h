#pragma once
#include "CoreMinimal.h"
#include "EDefensiveActionType.generated.h"

UENUM(BlueprintType)
enum class EDefensiveActionType : uint8 {
    None,
    MeleeBlock,
    Dodge,
    Flee,
    Count,
};

