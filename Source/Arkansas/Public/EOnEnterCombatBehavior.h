#pragma once
#include "CoreMinimal.h"
#include "EOnEnterCombatBehavior.generated.h"

UENUM(BlueprintType)
enum class EOnEnterCombatBehavior : uint8 {
    None,
    StationaryFire,
    StationaryFireIfOutsidePreferredRange,
};

