#pragma once
#include "CoreMinimal.h"
#include "EAbilityPosition.generated.h"

UENUM(BlueprintType)
enum class EAbilityPosition : uint8 {
    Bottom,
    Left,
    Top,
    Right,
};

