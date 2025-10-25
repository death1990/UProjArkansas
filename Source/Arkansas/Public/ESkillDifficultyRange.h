#pragma once
#include "CoreMinimal.h"
#include "ESkillDifficultyRange.generated.h"

UENUM(BlueprintType)
enum class ESkillDifficultyRange : uint8 {
    Cosmetic,
    Easy,
    Medium,
    Hard,
    Extreme,
    Count,
    Invalid,
};

