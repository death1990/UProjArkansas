#pragma once
#include "CoreMinimal.h"
#include "ECoverActions.generated.h"

UENUM(BlueprintType)
enum class ECoverActions : uint8 {
    None,
    Idle,
    ExposedFire,
    BlindFire,
    Peek,
    ThrowGrenade,
    StepOut,
    Entry,
    Exit,
    Pivot,
};

