#pragma once
#include "CoreMinimal.h"
#include "ESwitchEventType.generated.h"

UENUM(BlueprintType)
enum class ESwitchEventType : uint8 {
    Invalid,
    Changed,
    AnimateSwitch,
};

