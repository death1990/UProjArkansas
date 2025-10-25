#pragma once
#include "CoreMinimal.h"
#include "EPlayerMoveEventType.generated.h"

UENUM(BlueprintType)
enum class EPlayerMoveEventType : uint8 {
    Start,
    End,
};

