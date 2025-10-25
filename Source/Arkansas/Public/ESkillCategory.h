#pragma once
#include "CoreMinimal.h"
#include "ESkillCategory.generated.h"

UENUM(BlueprintType)
enum class ESkillCategory : uint8 {
    Melee,
    Ranged,
    Defense,
    Dialog,
    Stealth,
    Tech,
    Leadership,
    Skills,
    Count,
    Invalid,
};

