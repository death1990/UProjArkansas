#pragma once
#include "CoreMinimal.h"
#include "EInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EInterpolationType : uint8 {
    Linear,
    Step,
    SinusoidalIn,
    SinusoidalOut,
    SinusoidalInOut,
    EaseIn,
    EaseOut,
    EaseInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    CircularIn,
    CircularOut,
    CircularInOut,
};

