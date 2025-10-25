#pragma once
#include "CoreMinimal.h"
#include "EFPSIndicatorMode.generated.h"

UENUM(BlueprintType)
enum class EFPSIndicatorMode : uint8 {
    Off,
    TopLeft,
    TopRight,
    BottomRight,
    BottomLeft,
};

