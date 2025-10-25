#pragma once
#include "CoreMinimal.h"
#include "ETrapEventType.generated.h"

UENUM(BlueprintType)
enum class ETrapEventType : uint8 {
    Invalid,
    Armed,
    Disarmed,
    PreDetonate,
    Detonate,
    Rearmed,
};

