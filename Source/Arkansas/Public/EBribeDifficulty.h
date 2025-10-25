#pragma once
#include "CoreMinimal.h"
#include "EBribeDifficulty.generated.h"

UENUM(BlueprintType)
enum class EBribeDifficulty : uint8 {
    CrimeInterrogation,
    Easy,
    Medium,
    Hard,
    Extreme,
    Count,
};

