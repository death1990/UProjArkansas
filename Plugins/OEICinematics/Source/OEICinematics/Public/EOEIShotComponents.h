#pragma once
#include "CoreMinimal.h"
#include "EOEIShotComponents.generated.h"

UENUM(BlueprintType)
enum class EOEIShotComponents : uint8 {
    None,
    FieldOfView,
    Location,
    Rotation = 4,
    DepthOfField = 8,
    All = 15,
};

