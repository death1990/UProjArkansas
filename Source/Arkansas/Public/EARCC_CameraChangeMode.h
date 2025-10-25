#pragma once
#include "CoreMinimal.h"
#include "EARCC_CameraChangeMode.generated.h"

UENUM(BlueprintType)
enum class EARCC_CameraChangeMode : uint8 {
    Disabled,
    Clamped,
    Default,
};

