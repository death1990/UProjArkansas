#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.generated.h"

UENUM(BlueprintType)
enum class ECompanionCommand : uint8 {
    Invalid,
    MoveTo,
    Return,
    ForceReturn,
    Attack,
    CalledShot,
    Interact,
    Count,
};

