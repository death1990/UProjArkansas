#pragma once
#include "CoreMinimal.h"
#include "EFlashTriggerEvents.generated.h"

UENUM(BlueprintType)
enum class EFlashTriggerEvents : uint8 {
    StartDrain,
    EndDrain,
    StartRefill,
    EndRefill,
    BarEmpty,
    BarFull,
    Health_OnConsumable,
};

