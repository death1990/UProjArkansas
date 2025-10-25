#pragma once
#include "CoreMinimal.h"
#include "EAIGroupBehaviorAlgorithmState.generated.h"

UENUM(BlueprintType)
enum class EAIGroupBehaviorAlgorithmState : uint8 {
    Empty,
    Running,
    Ready,
};

