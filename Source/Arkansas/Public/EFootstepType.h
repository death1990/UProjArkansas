#pragma once
#include "CoreMinimal.h"
#include "EFootstepType.generated.h"

UENUM(BlueprintType)
enum class EFootstepType : uint8 {
    Run,
    Sprint,
    Crouched,
    Climb,
    Default,
    Count,
};

