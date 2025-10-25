#pragma once
#include "CoreMinimal.h"
#include "ESkillDifficultyTier.generated.h"

UENUM(BlueprintType)
enum class ESkillDifficultyTier : uint8 {
    One,
    Two,
    Three,
    Four,
    Five,
    Count,
    Invalid,
};

