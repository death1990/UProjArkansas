#pragma once
#include "CoreMinimal.h"
#include "ETargetInfoSubLocation.generated.h"

UENUM(BlueprintType)
enum class ETargetInfoSubLocation : uint8 {
    Default,
    Actor,
    Feet,
    Head,
    Aim,
};

