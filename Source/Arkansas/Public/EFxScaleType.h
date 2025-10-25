#pragma once
#include "CoreMinimal.h"
#include "EFxScaleType.generated.h"

UENUM(BlueprintType)
enum class EFxScaleType : uint8 {
    None,
    Relative,
    World,
};

