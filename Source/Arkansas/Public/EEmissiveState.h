#pragma once
#include "CoreMinimal.h"
#include "EEmissiveState.generated.h"

UENUM(BlueprintType)
enum class EEmissiveState : uint8 {
    Enabled,
    Disabled,
    Jammed,
    Sealed,
    Count,
};

