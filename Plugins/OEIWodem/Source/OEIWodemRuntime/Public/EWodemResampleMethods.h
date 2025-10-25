#pragma once
#include "CoreMinimal.h"
#include "EWodemResampleMethods.generated.h"

UENUM(BlueprintType)
enum class EWodemResampleMethods : uint8 {
    SegmentLength,
    SegmentCount,
};

