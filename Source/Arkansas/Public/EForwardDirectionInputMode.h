#pragma once
#include "CoreMinimal.h"
#include "EForwardDirectionInputMode.generated.h"

UENUM(BlueprintType)
enum class EForwardDirectionInputMode : uint8 {
    Vector,
    Rotator,
};

