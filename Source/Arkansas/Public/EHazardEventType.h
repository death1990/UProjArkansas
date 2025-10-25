#pragma once
#include "CoreMinimal.h"
#include "EHazardEventType.generated.h"

UENUM(BlueprintType)
enum class EHazardEventType : uint8 {
    Enabling,
    Enabled,
    Disabling,
    Disabled,
};

