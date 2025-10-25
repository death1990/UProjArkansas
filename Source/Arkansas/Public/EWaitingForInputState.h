#pragma once
#include "CoreMinimal.h"
#include "EWaitingForInputState.generated.h"

UENUM(BlueprintType)
enum class EWaitingForInputState : uint8 {
    WaitingForInput,
    HidingText,
    Complete,
};

