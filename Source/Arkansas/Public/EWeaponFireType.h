#pragma once
#include "CoreMinimal.h"
#include "EWeaponFireType.generated.h"

UENUM(BlueprintType)
enum class EWeaponFireType : uint8 {
    Ranged,
    Melee,
};

