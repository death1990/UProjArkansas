#pragma once
#include "CoreMinimal.h"
#include "EItemInteraction.generated.h"

UENUM(BlueprintType)
enum class EItemInteraction : uint8 {
    EDragDropStart,
    EDragDropEnd,
    EItemPickup,
    EItemConsumed,
};

