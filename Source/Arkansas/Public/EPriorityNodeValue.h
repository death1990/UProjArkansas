#pragma once
#include "CoreMinimal.h"
#include "EPriorityNodeValue.generated.h"

UENUM(BlueprintType)
enum class EPriorityNodeValue : uint8 {
    Lowest = 25,
    Lower = 50,
    Low = 75,
    Medium = 128,
    High = 175,
    Higher = 200,
    Highest = 225,
    Undefined = 0,
};

