#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackTypeChatterParam.generated.h"

UENUM(BlueprintType)
enum class EMeleeAttackTypeChatterParam : uint8 {
    Normal,
    Heavy,
    Sweep,
    Light,
    Finisher,
};

