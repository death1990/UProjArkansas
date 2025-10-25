#pragma once
#include "CoreMinimal.h"
#include "EOEICinematicScalarInterpolationMode.generated.h"

UENUM(BlueprintType)
enum class EOEICinematicScalarInterpolationMode : uint8 {
    Acceleration,
    Spring,
    None,
};

