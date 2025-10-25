#pragma once
#include "CoreMinimal.h"
#include "ESprintEventType.generated.h"

UENUM(BlueprintType)
enum class ESprintEventType : uint8 {
    Start,
    End,
};

