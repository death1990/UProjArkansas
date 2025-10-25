#pragma once
#include "CoreMinimal.h"
#include "EComputerHackState.generated.h"

UENUM(BlueprintType)
enum class EComputerHackState : uint8 {
    Hacked,
    NotHacked,
};

