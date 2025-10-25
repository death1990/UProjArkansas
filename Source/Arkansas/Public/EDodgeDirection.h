#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirection.generated.h"

UENUM(BlueprintType)
enum class EDodgeDirection : uint8 {
    Invalid,
    Back,
    Left,
    Right,
    Forward,
    Count,
};

