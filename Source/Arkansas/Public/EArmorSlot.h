#pragma once
#include "CoreMinimal.h"
#include "EArmorSlot.generated.h"

UENUM(BlueprintType)
enum class EArmorSlot : uint8 {
    ArmorSet,
    Helmet,
    Undersuit,
    Accessory0,
    Accessory1,
    Accessory2,
    Accessory3,
    Companion,
    Accessory4,
    Accessory5,
    Accessory6,
    Accessory7,
    Count,
    Invalid,
};

