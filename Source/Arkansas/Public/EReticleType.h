#pragma once
#include "CoreMinimal.h"
#include "EReticleType.generated.h"

UENUM(BlueprintType)
enum class EReticleType : uint8 {
    Invalid,
    CenterDotReticle,
    GenericCrossReticle,
    RoundReticle,
    StaticImageReticle,
    CircularAndTraditionalReticle,
};

