#pragma once
#include "CoreMinimal.h"
#include "ECameraPositonOffset.generated.h"

UENUM(BlueprintType)
enum class ECameraPositonOffset : uint8 {
    None,
    Left,
    Right,
    Custom,
    Count,
};

