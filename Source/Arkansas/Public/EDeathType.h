#pragma once
#include "CoreMinimal.h"
#include "EDeathType.generated.h"

UENUM(BlueprintType)
enum class EDeathType : uint8 {
    Corrosive,
    Dismember,
    Energy,
    Gib,
    NRay,
    Ragdoll,
    Shock,
    Thermal,
    Frost,
    Count,
};

