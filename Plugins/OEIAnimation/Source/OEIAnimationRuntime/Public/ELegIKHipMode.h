#pragma once
#include "CoreMinimal.h"
#include "ELegIKHipMode.generated.h"

UENUM(BlueprintType)
enum class ELegIKHipMode : uint8 {
    None,
    BipedHuman,
    GroundFollow,
    PullToLowest,
    Custom,
};

