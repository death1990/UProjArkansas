#pragma once
#include "CoreMinimal.h"
#include "EGravityState.generated.h"

UENUM(BlueprintType)
enum class EGravityState : uint8 {
    Disabled,
    Normal,
    Jump,
    ForcedJump,
};

