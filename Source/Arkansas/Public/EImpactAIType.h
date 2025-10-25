#pragma once
#include "CoreMinimal.h"
#include "EImpactAIType.generated.h"

UENUM(BlueprintType)
enum class EImpactAIType : uint8 {
    None,
    Ricochet,
    Explosion,
    GrenadeBounce,
};

