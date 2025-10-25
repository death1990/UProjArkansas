#pragma once
#include "CoreMinimal.h"
#include "EHazardOccupancyType.generated.h"

UENUM(BlueprintType)
enum class EHazardOccupancyType : uint8 {
    Any,
    Inside,
    Outside,
};

