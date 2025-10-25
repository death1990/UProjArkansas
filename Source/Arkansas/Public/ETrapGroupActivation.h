#pragma once
#include "CoreMinimal.h"
#include "ETrapGroupActivation.generated.h"

UENUM(BlueprintType)
enum class ETrapGroupActivation : uint8 {
    OneShot,
    Loop,
    PingPong,
};

