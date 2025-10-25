#pragma once
#include "CoreMinimal.h"
#include "ESurvivalBar.generated.h"

UENUM(BlueprintType)
enum class ESurvivalBar : uint8 {
    Hunger,
    Thirst,
    Sleep,
    Invalid,
};

