#pragma once
#include "CoreMinimal.h"
#include "EAmmoReloadType.generated.h"

UENUM(BlueprintType)
enum class EAmmoReloadType : uint8 {
    Magazine,
    Repeating,
    BreakAction,
};

