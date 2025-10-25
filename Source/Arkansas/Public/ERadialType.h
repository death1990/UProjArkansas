#pragma once
#include "CoreMinimal.h"
#include "ERadialType.generated.h"

UENUM(BlueprintType)
enum class ERadialType : uint8 {
    Any,
    InnerOnly,
    OuterOnly,
    Count,
};

