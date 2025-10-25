#pragma once
#include "CoreMinimal.h"
#include "EMotionSicknessMode.generated.h"

UENUM(BlueprintType)
enum class EMotionSicknessMode : uint8 {
    Off,
    SomeMotion,
    NoMotion,
};

