#pragma once
#include "CoreMinimal.h"
#include "EPlayerTargetEventType.generated.h"

UENUM(BlueprintType)
enum class EPlayerTargetEventType : uint8 {
    TargetStart,
    TargetEnd,
};

