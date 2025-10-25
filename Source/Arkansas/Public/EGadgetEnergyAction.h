#pragma once
#include "CoreMinimal.h"
#include "EGadgetEnergyAction.generated.h"

UENUM(BlueprintType)
enum class EGadgetEnergyAction : uint8 {
    None,
    Tick,
    Activation,
    Attack,
    Movement,
};

