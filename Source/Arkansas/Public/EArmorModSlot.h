#pragma once
#include "CoreMinimal.h"
#include "EArmorModSlot.generated.h"

UENUM(BlueprintType)
enum class EArmorModSlot : uint8 {
    Armoring,
    Resistance,
    Dampening,
    Utility,
    Materials,
    Dye,
    Decal,
    Count,
    Invalid,
};

