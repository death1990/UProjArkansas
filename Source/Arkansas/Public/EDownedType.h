#pragma once
#include "CoreMinimal.h"
#include "EDownedType.generated.h"

UENUM(BlueprintType)
enum class EDownedType : uint8 {
    Crouch,
    Prone,
    Stunned,
    Count,
};

