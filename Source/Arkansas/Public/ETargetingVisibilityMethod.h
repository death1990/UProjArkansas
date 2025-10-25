#pragma once
#include "CoreMinimal.h"
#include "ETargetingVisibilityMethod.generated.h"

UENUM(BlueprintType)
enum class ETargetingVisibilityMethod : uint8 {
    ExposedLocation,
    LookingAtSurface,
};

