#pragma once
#include "CoreMinimal.h"
#include "EDetectionType.generated.h"

UENUM(BlueprintType)
enum class EDetectionType : uint8 {
    None,
    Suspicious,
    Investigate,
    NonCombatAlerted,
    Pacifist,
    Cautious,
    MindControlled,
    PacifistCombat,
    Crime,
    Combat,
    Count,
};

