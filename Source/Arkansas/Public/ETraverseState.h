#pragma once
#include "CoreMinimal.h"
#include "ETraverseState.generated.h"

UENUM(BlueprintType)
enum class ETraverseState : uint8 {
    None,
    Waiting,
    Traversing,
};

