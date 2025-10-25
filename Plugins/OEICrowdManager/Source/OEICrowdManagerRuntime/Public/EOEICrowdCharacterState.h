#pragma once
#include "CoreMinimal.h"
#include "EOEICrowdCharacterState.generated.h"

UENUM(BlueprintType)
enum class EOEICrowdCharacterState : uint8 {
    Advanced,
    Mover,
    Stationary,
    AnimProxyFiller,
    Dead,
    Available,
    Invalid,
};

