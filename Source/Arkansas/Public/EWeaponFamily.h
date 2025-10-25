#pragma once
#include "CoreMinimal.h"
#include "EWeaponFamily.generated.h"

UENUM(BlueprintType)
enum class EWeaponFamily : uint8 {
    All,
    Ranged,
    Melee,
};

