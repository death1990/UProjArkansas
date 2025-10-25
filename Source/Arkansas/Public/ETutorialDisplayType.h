#pragma once
#include "CoreMinimal.h"
#include "ETutorialDisplayType.generated.h"

UENUM(BlueprintType)
enum class ETutorialDisplayType : uint8 {
    Invalid,
    Simple,
    CorporateLarge,
    Count,
};

