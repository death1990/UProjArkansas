#pragma once
#include "CoreMinimal.h"
#include "EOEIRetriggerFailType.generated.h"

UENUM(BlueprintType)
enum class EOEIRetriggerFailType : uint8 {
    InvalidConfiguration,
    ChanceToPlay,
    Cooldown,
    Distance,
    None,
};

