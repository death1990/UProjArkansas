#pragma once
#include "CoreMinimal.h"
#include "ECrowdDensity.generated.h"

UENUM(BlueprintType)
enum class ECrowdDensity : uint8 {
    Heavy,
    Medium,
    Light,
    Default,
};

