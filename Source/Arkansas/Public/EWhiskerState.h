#pragma once
#include "CoreMinimal.h"
#include "EWhiskerState.generated.h"

UENUM(BlueprintType)
enum class EWhiskerState : uint8 {
    Clear,
    Retracting,
    Releasing,
};

