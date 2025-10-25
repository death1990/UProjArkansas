#pragma once
#include "CoreMinimal.h"
#include "EHealValueType.generated.h"

UENUM(BlueprintType)
enum class EHealValueType : uint8 {
    Value,
    Percent,
};

