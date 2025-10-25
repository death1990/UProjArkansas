#pragma once
#include "CoreMinimal.h"
#include "EAnimTreeState.generated.h"

UENUM(BlueprintType)
enum class EAnimTreeState : uint8 {
    None,
    Neutral,
    Precombat,
    CombatNotReady,
    Combat,
    Count,
};

