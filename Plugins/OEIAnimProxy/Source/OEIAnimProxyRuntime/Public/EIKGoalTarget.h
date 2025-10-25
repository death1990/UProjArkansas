#pragma once
#include "CoreMinimal.h"
#include "EIKGoalTarget.generated.h"

UENUM(BlueprintType)
enum class EIKGoalTarget : uint8 {
    Invalid,
    LeftWrist,
    RightWrist,
};

