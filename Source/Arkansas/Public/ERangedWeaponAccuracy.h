#pragma once
#include "CoreMinimal.h"
#include "ERangedWeaponAccuracy.generated.h"

UENUM(BlueprintType)
enum class ERangedWeaponAccuracy : uint8 {
    Poor,
    BelowAverage,
    Average,
    AboveAverage,
    Excellent,
};

