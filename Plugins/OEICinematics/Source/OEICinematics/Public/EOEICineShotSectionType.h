#pragma once
#include "CoreMinimal.h"
#include "EOEICineShotSectionType.generated.h"

UENUM(BlueprintType)
enum class EOEICineShotSectionType : uint8 {
    Invalid,
    Shot,
    Target,
};

