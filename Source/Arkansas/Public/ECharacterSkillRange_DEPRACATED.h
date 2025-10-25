#pragma once
#include "CoreMinimal.h"
#include "ECharacterSkillRange_DEPRACATED.generated.h"

UENUM(BlueprintType)
enum class ECharacterSkillRange_DEPRACATED : uint8 {
    Low,
    Medium,
    High,
    Extreme,
    Cosmetic,
    Count,
    Invalid,
};

