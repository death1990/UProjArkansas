#pragma once
#include "CoreMinimal.h"
#include "ERpgStatGroup.generated.h"

UENUM(BlueprintType)
enum class ERpgStatGroup : uint8 {
    Character,
    Weapon,
    Count,
    Invalid = 255,
};

