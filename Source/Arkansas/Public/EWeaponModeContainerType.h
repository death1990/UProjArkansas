#pragma once
#include "CoreMinimal.h"
#include "EWeaponModeContainerType.generated.h"

UENUM(BlueprintType)
enum class EWeaponModeContainerType : uint8 {
    Primary,
    Secondary,
    Both,
};

