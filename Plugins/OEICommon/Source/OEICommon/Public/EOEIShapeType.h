#pragma once
#include "CoreMinimal.h"
#include "EOEIShapeType.generated.h"

UENUM(BlueprintType)
enum class EOEIShapeType : uint8 {
    Unknown,
    Box,
    Sphere,
    Capsule,
};

