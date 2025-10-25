#pragma once
#include "CoreMinimal.h"
#include "EPickpocketEventType.generated.h"

UENUM(BlueprintType)
enum class EPickpocketEventType : uint8 {
    Start,
    End,
    Success,
};

