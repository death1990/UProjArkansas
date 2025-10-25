#pragma once
#include "CoreMinimal.h"
#include "EStackSplitStyle.generated.h"

UENUM(BlueprintType)
enum class EStackSplitStyle : uint8 {
    Default,
    CenterBG,
    Center,
    LeftBG,
    Left,
    TopBG,
    Top,
    RightBG,
    Right,
    BottomBG,
    Bottom,
};

