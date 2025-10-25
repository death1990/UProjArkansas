#pragma once
#include "CoreMinimal.h"
#include "ELocationType.generated.h"

UENUM(BlueprintType)
enum class ELocationType : uint8 {
    Actor,
    Feet,
    Head,
    Aim,
};

