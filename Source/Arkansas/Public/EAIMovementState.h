#pragma once
#include "CoreMinimal.h"
#include "EAIMovementState.generated.h"

UENUM(BlueprintType)
enum class EAIMovementState : uint8 {
    Walk,
    Run,
    Sprint,
    Dynamic,
};

