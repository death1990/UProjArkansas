#pragma once
#include "CoreMinimal.h"
#include "EDirectionActive.generated.h"

UENUM(BlueprintType)
enum class EDirectionActive : uint8 {
    DA_Neutral,
    DA_Forward,
    DA_Backward,
    DA_Left,
    DA_Right,
};

