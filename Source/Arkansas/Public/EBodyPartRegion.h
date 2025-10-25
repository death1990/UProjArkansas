#pragma once
#include "CoreMinimal.h"
#include "EBodyPartRegion.generated.h"

UENUM(BlueprintType)
enum class EBodyPartRegion : uint8 {
    Invalid,
    Head,
    Torso,
    Arm,
    Leg,
};

