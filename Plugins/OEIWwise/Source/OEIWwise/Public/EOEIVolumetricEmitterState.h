#pragma once
#include "CoreMinimal.h"
#include "EOEIVolumetricEmitterState.generated.h"

UENUM(BlueprintType)
enum class EOEIVolumetricEmitterState : uint8 {
    Idle,
    Playing,
    InvalidDistance,
    Stopped,
};

