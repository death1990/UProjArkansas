#pragma once
#include "CoreMinimal.h"
#include "EFxOverrideType.generated.h"

UENUM(BlueprintType)
enum class EFxOverrideType : uint8 {
    Bool,
    Int,
    Float,
    Vector,
    Color,
    StaticMesh,
    Material,
};

