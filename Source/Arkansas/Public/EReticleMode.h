#pragma once
#include "CoreMinimal.h"
#include "EReticleMode.generated.h"

UENUM(BlueprintType)
enum class EReticleMode : uint8 {
    Default,
    HipFireOnly_DEPRECATED,
    ADSOnly,
    Both,
};

