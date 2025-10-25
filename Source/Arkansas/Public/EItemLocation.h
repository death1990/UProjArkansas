#pragma once
#include "CoreMinimal.h"
#include "EItemLocation.generated.h"

UENUM(BlueprintType)
enum class EItemLocation : uint8 {
    Inventory,
    Equipped,
    Slotted,
    Any,
};

