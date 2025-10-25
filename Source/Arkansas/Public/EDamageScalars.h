#pragma once
#include "CoreMinimal.h"
#include "EDamageScalars.generated.h"

UENUM(BlueprintType)
enum class EDamageScalars : uint8 {
    WeaponLevel,
    CharLevel,
    TargetLevel,
    WeaponDurability,
    SneakAttack,
    WeaponCritMult,
};

