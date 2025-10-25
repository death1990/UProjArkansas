#pragma once
#include "CoreMinimal.h"
#include "EReticleVisibility.generated.h"

UENUM(BlueprintType)
enum class EReticleVisibility : uint8 {
    AlwaysOn,
    AlwaysOff,
    CombatOnly,
};

