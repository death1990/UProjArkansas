#pragma once
#include "CoreMinimal.h"
#include "ETrackingMode.generated.h"

UENUM(BlueprintType)
enum class ETrackingMode : uint8 {
    None,
    Default,
    Bark,
    Conversation = 4,
    Elevator = 8,
};

