#pragma once
#include "CoreMinimal.h"
#include "EWeaponModMatch.generated.h"

UENUM(BlueprintType)
enum class EWeaponModMatch : uint8 {
    Any,
    Specific,
    Empty,
    Except,
};

