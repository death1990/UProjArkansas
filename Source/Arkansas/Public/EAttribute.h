#pragma once
#include "CoreMinimal.h"
#include "EAttribute.generated.h"

UENUM(BlueprintType)
enum class EAttribute : uint8 {
    Strength,
    Dexterity,
    Endurance,
    Intelligence,
    Perception,
    Willpower,
    Charm,
    Wits,
    Temperament,
    Count,
    Invalid,
};

