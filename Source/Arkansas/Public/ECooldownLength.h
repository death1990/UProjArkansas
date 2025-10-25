#pragma once
#include "CoreMinimal.h"
#include "ECooldownLength.generated.h"

UENUM(BlueprintType)
enum class ECooldownLength : uint8 {
    Short,
    Medium,
    Long,
    Count,
};

