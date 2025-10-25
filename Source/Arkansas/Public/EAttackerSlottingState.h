#pragma once
#include "CoreMinimal.h"
#include "EAttackerSlottingState.generated.h"

UENUM(BlueprintType)
enum class EAttackerSlottingState : uint8 {
    Unslotted_NoMove,
    Unslotted,
    Waiting,
    Slotted,
};

