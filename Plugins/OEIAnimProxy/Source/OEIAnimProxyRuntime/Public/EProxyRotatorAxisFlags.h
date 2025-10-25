#pragma once
#include "CoreMinimal.h"
#include "EProxyRotatorAxisFlags.generated.h"

UENUM(BlueprintType)
enum class EProxyRotatorAxisFlags : uint8 {
    Pitch = 1,
    Yaw,
    Roll = 4,
};

