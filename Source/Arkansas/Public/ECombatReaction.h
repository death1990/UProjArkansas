#pragma once
#include "CoreMinimal.h"
#include "ECombatReaction.generated.h"

UENUM(BlueprintType)
enum class ECombatReaction : uint8 {
    Attack,
    Cower,
    Flee,
    CowerOrFlee,
    None,
};

