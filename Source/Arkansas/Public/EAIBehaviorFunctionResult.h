#pragma once
#include "CoreMinimal.h"
#include "EAIBehaviorFunctionResult.generated.h"

UENUM(BlueprintType)
enum class EAIBehaviorFunctionResult : uint8 {
    Success,
    Failed,
    Deferred,
};

