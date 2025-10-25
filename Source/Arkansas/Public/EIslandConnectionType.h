#pragma once
#include "CoreMinimal.h"
#include "EIslandConnectionType.generated.h"

UENUM(BlueprintType)
enum class EIslandConnectionType : uint8 {
    NavLink,
    Elevator,
    Count,
};

