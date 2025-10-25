#pragma once
#include "CoreMinimal.h"
#include "EStandingLevel.generated.h"

UENUM(BlueprintType)
enum class EStandingLevel : uint8 {
    None,
    One,
    Two,
    Three,
    Count,
};

