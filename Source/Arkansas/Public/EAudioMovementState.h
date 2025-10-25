#pragma once
#include "CoreMinimal.h"
#include "EAudioMovementState.generated.h"

UENUM(BlueprintType)
enum class EAudioMovementState : uint8 {
    Idle,
    Walking,
    Sprinting,
    Count,
};

