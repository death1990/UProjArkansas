#pragma once
#include "CoreMinimal.h"
#include "ETempHealthValueType.generated.h"

UENUM(BlueprintType)
enum class ETempHealthValueType : uint8 {
    Value,
    Percent,
};

