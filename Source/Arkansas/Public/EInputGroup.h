#pragma once
#include "CoreMinimal.h"
#include "EInputGroup.generated.h"

UENUM(BlueprintType)
enum class EInputGroup : uint8 {
    None,
    LeftStick,
    RightStick,
    DPad = 4,
};

