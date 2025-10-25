#pragma once
#include "CoreMinimal.h"
#include "EItemDegradationState.generated.h"

UENUM(BlueprintType)
enum class EItemDegradationState : uint8 {
    None,
    Damaged,
    SeverelyDamaged,
    Destroyed,
};

