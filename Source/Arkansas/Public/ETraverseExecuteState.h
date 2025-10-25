#pragma once
#include "CoreMinimal.h"
#include "ETraverseExecuteState.generated.h"

UENUM(BlueprintType)
enum class ETraverseExecuteState : uint8 {
    None,
    InterruptReady,
    PrePositioning,
    RunAction,
};

