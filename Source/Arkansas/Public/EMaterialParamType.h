#pragma once
#include "CoreMinimal.h"
#include "EMaterialParamType.generated.h"

UENUM(BlueprintType)
enum class EMaterialParamType : uint8 {
    Scalar,
    Vector,
    Texture,
    SubsurfaceProfile,
};

