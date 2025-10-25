#pragma once
#include "CoreMinimal.h"
#include "EBonusItemSortLocation.generated.h"

UENUM(BlueprintType)
enum class EBonusItemSortLocation : uint8 {
    Disabled,
    Top,
    Bottom,
};

