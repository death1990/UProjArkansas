#pragma once
#include "CoreMinimal.h"
#include "ETargetInfoRelativeLocation.generated.h"

UENUM(BlueprintType)
enum class ETargetInfoRelativeLocation : uint8 {
    None,
    RealLocation,
    TrackedLocation,
    LastKnownLocation,
};

