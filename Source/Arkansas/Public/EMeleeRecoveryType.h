#pragma once
#include "CoreMinimal.h"
#include "EMeleeRecoveryType.generated.h"

UENUM(BlueprintType)
enum class EMeleeRecoveryType : uint8 {
    None,
    Move,
    Dodge,
};

