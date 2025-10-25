#pragma once
#include "CoreMinimal.h"
#include "ETimeDilationPriority.generated.h"

UENUM(BlueprintType)
enum class ETimeDilationPriority : uint8 {
    Low,
    Medium,
    High,
    Critical,
};

