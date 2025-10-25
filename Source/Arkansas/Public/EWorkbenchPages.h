#pragma once
#include "CoreMinimal.h"
#include "EWorkbenchPages.generated.h"

UENUM(BlueprintType)
enum class EWorkbenchPages : uint8 {
    Modification,
    Upgrade,
    Repair,
    Breakdown,
    Count,
};

