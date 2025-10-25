#pragma once
#include "CoreMinimal.h"
#include "EWeaponStateEventType.generated.h"

UENUM(BlueprintType)
enum class EWeaponStateEventType : uint8 {
    Equipped,
    Unequipped,
    Holstered,
    Unholstered,
};

