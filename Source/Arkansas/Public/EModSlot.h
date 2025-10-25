#pragma once
#include "CoreMinimal.h"
#include "EModSlot.generated.h"

UENUM(BlueprintType)
enum class EModSlot : uint8 {
    None,
    Barrel,
    UnderBarrel,
    Magazine,
    Sight,
    MeleeGrip,
    MeleeAttack,
    SlotCount,
};

