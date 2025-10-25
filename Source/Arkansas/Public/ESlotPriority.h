#pragma once
#include "CoreMinimal.h"
#include "ESlotPriority.generated.h"

UENUM(BlueprintType)
enum class ESlotPriority : uint8 {
    Lowest,
    Low,
    Normal,
    High,
    Highest,
};

