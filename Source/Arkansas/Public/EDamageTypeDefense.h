#pragma once
#include "CoreMinimal.h"
#include "EDamageTypeDefense.generated.h"

UENUM(BlueprintType)
enum class EDamageTypeDefense : uint8 {
    Default,
    Weak,
    Resistant,
    Immune,
    Count,
};

