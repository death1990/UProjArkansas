#pragma once
#include "CoreMinimal.h"
#include "ECategoryFilterType.generated.h"

UENUM(BlueprintType)
enum class ECategoryFilterType : uint8 {
    All,
    Consumables,
    ArmorMod,
    WeaponMod,
    Primer,
    Misc,
};

