#pragma once
#include "CoreMinimal.h"
#include "EOEICinematicFramingTargetAxisGuideMode.generated.h"

UENUM(BlueprintType)
enum class EOEICinematicFramingTargetAxisGuideMode : uint8 {
    TargetSlotPosition,
    TargetBoxRelative,
};

