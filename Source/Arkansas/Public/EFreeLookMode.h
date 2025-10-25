#pragma once
#include "CoreMinimal.h"
#include "EFreeLookMode.generated.h"

UENUM(BlueprintType)
enum class EFreeLookMode : uint8 {
    Inactive,
    Active,
    RotatingCameraToBody,
    RotatingBodyToCamera,
};

