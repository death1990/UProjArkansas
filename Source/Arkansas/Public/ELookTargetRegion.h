#pragma once
#include "CoreMinimal.h"
#include "ELookTargetRegion.generated.h"

UENUM(BlueprintType)
enum class ELookTargetRegion : uint8 {
    Body,
    Eyes,
    Head,
    Actor,
    Count,
};

