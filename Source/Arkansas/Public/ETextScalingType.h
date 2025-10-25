#pragma once
#include "CoreMinimal.h"
#include "ETextScalingType.generated.h"

UENUM(BlueprintType)
enum class ETextScalingType : uint8 {
    EStandardFontScaling,
    ESubtitleFontScaling,
    Invalid,
};

