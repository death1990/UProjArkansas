#pragma once
#include "CoreMinimal.h"
#include "ERankLevel.generated.h"

UENUM(BlueprintType)
enum class ERankLevel : uint8 {
    Zero,
    One,
    Two,
    Three,
    Four,
    Count,
};

