#pragma once
#include "CoreMinimal.h"
#include "ECompanionCombatMode.generated.h"

UENUM(BlueprintType)
enum class ECompanionCombatMode : uint8 {
    Passive,
    Defensive,
    Aggressive,
};

