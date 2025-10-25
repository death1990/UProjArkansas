#pragma once
#include "CoreMinimal.h"
#include "EAnimationControlledRangeAttackType.generated.h"

UENUM(BlueprintType)
enum class EAnimationControlledRangeAttackType : uint8 {
    CalledShot,
    CustomFire,
    EnhancedCalledShot,
    Invalid,
};

