#pragma once
#include "CoreMinimal.h"
#include "OEIAcousticsInterpolationDisambiguationMode.generated.h"

UENUM(BlueprintType)
enum class OEIAcousticsInterpolationDisambiguationMode : uint8 {
    Default,
    None,
    Blend,
    Nearest,
    Loudest,
    Quietest,
    Push,
};

