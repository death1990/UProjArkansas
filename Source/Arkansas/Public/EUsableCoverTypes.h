#pragma once
#include "CoreMinimal.h"
#include "EUsableCoverTypes.generated.h"

UENUM(BlueprintType)
enum class EUsableCoverTypes : uint8 {
    All,
    FullOnly,
    HalfOnly,
};

