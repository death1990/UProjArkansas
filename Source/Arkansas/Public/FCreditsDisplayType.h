#pragma once
#include "CoreMinimal.h"
#include "FCreditsDisplayType.generated.h"

UENUM(BlueprintType)
enum class FCreditsDisplayType : uint8 {
    None,
    Text,
    Image,
    Spacing,
};

