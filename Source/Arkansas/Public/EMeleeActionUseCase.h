#pragma once
#include "CoreMinimal.h"
#include "EMeleeActionUseCase.generated.h"

UENUM(BlueprintType)
enum class EMeleeActionUseCase : uint8 {
    Default,
    WithinRange,
    OutsideRange,
    AbilityOnly,
    ForceIfOutsideRange,
};

