#pragma once
#include "CoreMinimal.h"
#include "EFiringModeExclusivities.generated.h"

UENUM(BlueprintType)
enum class EFiringModeExclusivities : uint8 {
    None,
    HipFire,
    ADS,
};

