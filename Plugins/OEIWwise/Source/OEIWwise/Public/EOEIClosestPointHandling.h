#pragma once
#include "CoreMinimal.h"
#include "EOEIClosestPointHandling.generated.h"

UENUM(BlueprintType)
enum class EOEIClosestPointHandling : uint8 {
    None,
    ClosestPointOnBounds,
    RandomPointInIntersection,
    SetDistanceFromPlayer,
};

