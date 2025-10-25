#pragma once
#include "CoreMinimal.h"
#include "EAIMeleeAction.generated.h"

UENUM(BlueprintType)
enum class EAIMeleeAction : uint8 {
    None,
    Left,
    Right,
    Power,
    Sweep,
    Special1,
    Special2,
    Special3,
    Special4,
};

