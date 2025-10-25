#pragma once
#include "CoreMinimal.h"
#include "EOwnerType.generated.h"

UENUM(BlueprintType)
enum class EOwnerType : uint8 {
    Generic,
    Door,
    Terminal,
    Container,
    ElevatorSwitch,
    AutoDoc,
    LockboxDispenser,
};

