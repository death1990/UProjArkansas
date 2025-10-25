#pragma once
#include "CoreMinimal.h"
#include "ECycleDirection.generated.h"

UENUM()
enum class ECycleDirection : int8 {
    Up = 1,
    Down = -1,
};

