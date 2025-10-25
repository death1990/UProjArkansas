#pragma once
#include "CoreMinimal.h"
#include "CycleBehavior.generated.h"

UENUM(BlueprintType)
enum class CycleBehavior : uint8 {
    LinearRepeat,
    LinearOnceOnly,
    PingPong,
};

