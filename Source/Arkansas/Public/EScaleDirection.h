#pragma once
#include "CoreMinimal.h"
#include "EScaleDirection.generated.h"

UENUM(BlueprintType)
enum class EScaleDirection : uint8 {
    ETopLeft,
    ETopCenterOut,
    ETopRight,
    EBottomLeft,
    EBottomOut,
    EBottomRight,
};

