#pragma once
#include "CoreMinimal.h"
#include "ETargetPriority.generated.h"

UENUM(BlueprintType)
enum class ETargetPriority : uint8 {
    Default,
    HighPriority,
    LowPriority,
    Untargetable,
};

