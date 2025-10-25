#pragma once
#include "CoreMinimal.h"
#include "ETextDirectionType.generated.h"

UENUM(BlueprintType)
enum class ETextDirectionType : uint8 {
    NoDirectionalBias,
    Up,
    Down,
};

