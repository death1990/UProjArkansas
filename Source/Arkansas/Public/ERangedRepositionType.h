#pragma once
#include "CoreMinimal.h"
#include "ERangedRepositionType.generated.h"

UENUM(BlueprintType)
enum class ERangedRepositionType : uint8 {
    Default,
    Stationary,
    Forward,
    Backward,
    Strafe,
};

