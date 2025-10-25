#pragma once
#include "CoreMinimal.h"
#include "ESwapItemType.generated.h"

UENUM(BlueprintType)
enum class ESwapItemType : uint8 {
    None,
    Weapon,
    Throwable,
    Consumable,
};

