#pragma once
#include "CoreMinimal.h"
#include "EFireFlags.generated.h"

UENUM(BlueprintType)
enum class EFireFlags : uint8 {
    None,
    NoDamage,
    Critical,
    DontConsumeAmmo = 4,
    Melee = 8,
    Range = 16,
    IgnoreCondition = 32,
    CalledShot = 64,
    Armageddon = 128,
};

