#pragma once
#include "CoreMinimal.h"
#include "EStateOfBeing.generated.h"

UENUM(BlueprintType)
enum class EStateOfBeing : uint8 {
    Healthy,
    GoingDown,
    Downed,
    Dying,
    Dead,
};

