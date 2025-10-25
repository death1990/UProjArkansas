#pragma once
#include "CoreMinimal.h"
#include "EWeaponModes.generated.h"

UENUM(BlueprintType)
enum class EWeaponModes : uint8 {
    None,
    Primary,
    Secondary,
};

