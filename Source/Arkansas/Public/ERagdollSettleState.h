#pragma once
#include "CoreMinimal.h"
#include "ERagdollSettleState.generated.h"

UENUM(BlueprintType)
enum class ERagdollSettleState : uint8 {
    None,
    Alive,
    Dead,
};

