#pragma once
#include "CoreMinimal.h"
#include "EPerkSorting.generated.h"

UENUM(BlueprintType)
enum class EPerkSorting : uint8 {
    CustomSort,
    Alphabetical,
    PurchaseRequirements,
    SkillType,
};

