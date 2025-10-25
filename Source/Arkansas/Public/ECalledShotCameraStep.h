#pragma once
#include "CoreMinimal.h"
#include "ECalledShotCameraStep.generated.h"

UENUM(BlueprintType)
enum class ECalledShotCameraStep : uint8 {
    Attacker,
    Target,
    TargetReaction,
    Complete,
};

