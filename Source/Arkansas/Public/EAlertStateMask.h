#pragma once
#include "CoreMinimal.h"
#include "EAlertStateMask.generated.h"

UENUM(BlueprintType)
enum class EAlertStateMask : uint8 {
    None,
    Unaware,
    Suspicious,
    Investigating = 4,
    NonCombatAlerted = 8,
    Cautious = 16,
    Alerted = 32,
};

