#pragma once
#include "CoreMinimal.h"
#include "EDestructibleState.generated.h"

UENUM(BlueprintType)
enum class EDestructibleState : uint8 {
    Pristine,
    LightlyDamaged,
    Damaged,
    Destroyed,
};

