#pragma once
#include "CoreMinimal.h"
#include "EStatModifierType.generated.h"

UENUM(BlueprintType)
enum class EStatModifierType : uint8 {
    PreAdd,
    Multiplier,
    PostAdd,
};

