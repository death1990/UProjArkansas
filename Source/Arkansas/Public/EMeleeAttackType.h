#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackType.generated.h"

UENUM(BlueprintType)
enum class EMeleeAttackType : uint8 {
    None,
    Light,
    Heavy,
    WindUp,
};

