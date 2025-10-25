#pragma once
#include "CoreMinimal.h"
#include "EWeaponMovementRestrictions.generated.h"

UENUM(BlueprintType)
enum class EWeaponMovementRestrictions : uint8 {
    Parkour,
    Sliding,
    Sprinting,
};

