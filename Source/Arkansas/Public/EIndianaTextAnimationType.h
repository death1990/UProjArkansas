#pragma once
#include "CoreMinimal.h"
#include "EIndianaTextAnimationType.generated.h"

UENUM(BlueprintType)
enum class EIndianaTextAnimationType : uint8 {
    Invalid,
    DefaultComputerTerminalHeader,
    DefaultComputerTerminalSubheader,
    ComputerTerminalBody,
    Count,
};

