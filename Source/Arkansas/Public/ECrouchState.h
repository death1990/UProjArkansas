#pragma once
#include "CoreMinimal.h"
#include "ECrouchState.generated.h"

UENUM(BlueprintType)
enum class ECrouchState : uint8 {
    Current,
    Crouched,
    UnCrouched,
};

