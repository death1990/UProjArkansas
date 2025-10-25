#pragma once
#include "CoreMinimal.h"
#include "EAIActionResult.generated.h"

UENUM(BlueprintType)
enum class EAIActionResult : uint8 {
    NotStarted,
    InProgress,
    Succeeded,
    Failed,
    Aborted,
};

