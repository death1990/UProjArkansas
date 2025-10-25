#pragma once
#include "CoreMinimal.h"
#include "EPostProcessSettingsParameter.generated.h"

UENUM(BlueprintType)
enum class EPostProcessSettingsParameter : uint8 {
    None,
    Contrast,
    Intensity,
    FocalDistance,
    Scale,
    NearTransitionRegion,
    FarTransitionRegion,
};

