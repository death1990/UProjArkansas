#pragma once
#include "CoreMinimal.h"
#include "EARCC_CameraPosition.generated.h"

UENUM(BlueprintType)
enum class EARCC_CameraPosition : uint8 {
    Background,
    Close,
    FullBody,
    ThreeQuarter,
    Custom,
    Count,
};

