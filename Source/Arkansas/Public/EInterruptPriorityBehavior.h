#pragma once
#include "CoreMinimal.h"
#include "EInterruptPriorityBehavior.generated.h"

UENUM(BlueprintType)
enum class EInterruptPriorityBehavior : uint8 {
    DiscardOnEqualOrGreater,
    DiscardOnGreaterOnly,
    Queue,
};

