#pragma once
#include "CoreMinimal.h"
#include "EReputationType.generated.h"

UENUM(BlueprintType)
enum class EReputationType : uint8 {
    Positive,
    Negative,
};

