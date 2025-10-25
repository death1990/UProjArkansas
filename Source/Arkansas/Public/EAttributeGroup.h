#pragma once
#include "CoreMinimal.h"
#include "EAttributeGroup.generated.h"

UENUM(BlueprintType)
enum class EAttributeGroup : uint8 {
    Body,
    Mind,
    Personality,
    Count,
    Invalid,
};

