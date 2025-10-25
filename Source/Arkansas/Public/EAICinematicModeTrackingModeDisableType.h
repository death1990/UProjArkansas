#pragma once
#include "CoreMinimal.h"
#include "EAICinematicModeTrackingModeDisableType.generated.h"

UENUM(BlueprintType)
enum class EAICinematicModeTrackingModeDisableType : uint8 {
    None,
    Head,
    Eyes,
    Body = 4,
    Weapon = 8,
};

