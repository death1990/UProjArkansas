#pragma once
#include "CoreMinimal.h"
#include "ECoverSide.generated.h"

UENUM(BlueprintType)
enum class ECoverSide : uint8 {
    None,
    CenterOrTop,
    Left,
    Right,
};

