#pragma once
#include "CoreMinimal.h"
#include "ESearchInterruptedResponse.generated.h"

UENUM(BlueprintType)
enum class ESearchInterruptedResponse : uint8 {
    Abort,
    Keep,
    Count,
};

