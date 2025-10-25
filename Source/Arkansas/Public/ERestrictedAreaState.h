#pragma once
#include "CoreMinimal.h"
#include "ERestrictedAreaState.generated.h"

UENUM(BlueprintType)
enum class ERestrictedAreaState : uint8 {
    AccessGranted,
    AccessDenied,
    Disabled,
    Count,
    Invalid,
};

