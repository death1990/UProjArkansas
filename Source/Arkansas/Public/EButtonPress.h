#pragma once
#include "CoreMinimal.h"
#include "EButtonPress.generated.h"

UENUM(BlueprintType)
enum class EButtonPress : uint8 {
    Invalid,
    OnPress,
    OnTap,
    OnHold,
    OnRelease,
};

