#pragma once
#include "CoreMinimal.h"
#include "EScalarType.generated.h"

UENUM(BlueprintType)
enum class EScalarType : uint8 {
    Invalid,
    Health,
    Damage,
    Armor,
};

