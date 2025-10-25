#pragma once
#include "CoreMinimal.h"
#include "EThrowableTrajectoryAdjustMode.generated.h"

UENUM(BlueprintType)
enum class EThrowableTrajectoryAdjustMode : uint8 {
    NoAdjustments,
    HitTargetAimLocationWithFixedInitialSpeed,
    HitTargetAimLocationWithFixedArcHeight,
};

