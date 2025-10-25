#pragma once
#include "CoreMinimal.h"
#include "ESSTargetType.generated.h"

UENUM(BlueprintType)
enum class ESSTargetType : uint8 {
    Invalid,
    Default,
    DefaultLOS,
    AimAssist,
    MinimapLOS,
    AutoAim,
    Count,
};

