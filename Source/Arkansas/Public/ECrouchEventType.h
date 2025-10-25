#pragma once
#include "CoreMinimal.h"
#include "ECrouchEventType.generated.h"

UENUM(BlueprintType)
enum class ECrouchEventType : uint8 {
    Start,
    Stop,
    Both,
};

