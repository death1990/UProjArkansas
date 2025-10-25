#pragma once
#include "CoreMinimal.h"
#include "EARCC_PageType.generated.h"

UENUM(BlueprintType)
enum class EARCC_PageType : uint8 {
    Customization,
    Background,
    Trait,
    Skill,
    Name,
    Summary,
    Count,
    INVALID,
};

