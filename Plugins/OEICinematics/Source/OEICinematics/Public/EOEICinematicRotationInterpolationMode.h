#pragma once
#include "CoreMinimal.h"
#include "EOEICinematicRotationInterpolationMode.generated.h"

UENUM(BlueprintType)
enum class EOEICinematicRotationInterpolationMode : uint8 {
    Acceleration,
    AccelerationDirect,
    Spring,
    SpringDirect,
    None,
};

