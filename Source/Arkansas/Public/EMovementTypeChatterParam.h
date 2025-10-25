#pragma once
#include "CoreMinimal.h"
#include "EMovementTypeChatterParam.generated.h"

UENUM(BlueprintType)
enum class EMovementTypeChatterParam : uint8 {
    SprintStart,
    JumpStart,
    DoubleJumpStart,
    Vault,
    Mantle,
    Land,
    Dodge,
};

