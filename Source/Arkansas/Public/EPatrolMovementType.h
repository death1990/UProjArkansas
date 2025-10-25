#pragma once
#include "CoreMinimal.h"
#include "EPatrolMovementType.generated.h"

UENUM()
enum class EPatrolMovementType : int32 {
    Run,
    Walk,
    Sprint,
};

