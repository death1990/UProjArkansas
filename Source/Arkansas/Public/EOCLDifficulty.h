#pragma once
#include "CoreMinimal.h"
#include "EOCLDifficulty.generated.h"

UENUM(BlueprintType)
enum class EOCLDifficulty : uint8 {
    Cosmetic,
    Easy,
    Medium,
    Hard,
    Extreme,
    Invalid,
};

