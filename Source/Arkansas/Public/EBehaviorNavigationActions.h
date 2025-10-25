#pragma once
#include "CoreMinimal.h"
#include "EBehaviorNavigationActions.generated.h"

UENUM(BlueprintType)
enum class EBehaviorNavigationActions : uint8 {
    Jump,
    Mantle,
    Vault,
    DropDown,
    UseLadders,
    OpenDoors,
    PathThroughHazards,
    PathThroughTraps,
    UNUSED_2,
    UNUSED_1,
    Count,
};

