#pragma once
#include "CoreMinimal.h"
#include "EPerkCategory.generated.h"

UENUM(BlueprintType)
enum class EPerkCategory : uint8 {
    Military,
    Adventurer,
    SilverTongue,
    Companion,
    Count,
};

