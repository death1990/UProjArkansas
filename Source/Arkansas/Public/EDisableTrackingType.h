#pragma once
#include "CoreMinimal.h"
#include "EDisableTrackingType.generated.h"

UENUM(BlueprintType)
enum class EDisableTrackingType : uint8 {
    Locked,
    TrackCaster,
    None,
};

