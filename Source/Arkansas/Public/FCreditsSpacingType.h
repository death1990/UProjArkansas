#pragma once
#include "CoreMinimal.h"
#include "FCreditsSpacingType.generated.h"

UENUM(BlueprintType)
enum class FCreditsSpacingType : uint8 {
    None,
    VerySmall,
    Small,
    Average,
    Large,
    VeryLarge,
};

