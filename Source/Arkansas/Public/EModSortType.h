#pragma once
#include "CoreMinimal.h"
#include "EModSortType.generated.h"

UENUM(BlueprintType)
enum class EModSortType : uint8 {
    Quantity,
    Alphabetical,
    SlotType,
};

