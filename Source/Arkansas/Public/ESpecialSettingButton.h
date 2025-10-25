#pragma once
#include "CoreMinimal.h"
#include "ESpecialSettingButton.generated.h"

UENUM(BlueprintType)
enum class ESpecialSettingButton : uint8 {
    None,
    BindingsPC,
    LayoutsGamepad,
    ScalingHUD,
};

