#pragma once
#include "CoreMinimal.h"
#include "ESpeechCheckDifficultyRange.generated.h"

UENUM(BlueprintType)
enum class ESpeechCheckDifficultyRange : uint8 {
    Easy,
    Medium,
    Hard,
    Count,
    Invalid,
};

