#pragma once
#include "CoreMinimal.h"
#include "ETimeDilationType.generated.h"

UENUM(BlueprintType)
enum class ETimeDilationType : uint8 {
    Static,
    Curve,
};

