#pragma once
#include "CoreMinimal.h"
#include "EDestructibleEventType.generated.h"

UENUM(BlueprintType)
enum class EDestructibleEventType : uint8 {
    Invalid,
    Pristine,
    LightlyDamaged,
    Damaged,
    Destroyed,
};

