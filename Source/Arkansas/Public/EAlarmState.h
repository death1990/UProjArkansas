#pragma once
#include "CoreMinimal.h"
#include "EAlarmState.generated.h"

UENUM(BlueprintType)
enum class EAlarmState : uint8 {
    Off,
    On,
    Disabled,
};

