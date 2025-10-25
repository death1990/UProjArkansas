#pragma once
#include "CoreMinimal.h"
#include "ENotificationIconOverride.generated.h"

UENUM(BlueprintType)
enum class ENotificationIconOverride : uint8 {
    ItemIcon,
    ExpIcon,
    GenericIcon,
    None,
    Invalid,
};

