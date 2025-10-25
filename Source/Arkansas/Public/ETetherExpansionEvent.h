#pragma once
#include "CoreMinimal.h"
#include "ETetherExpansionEvent.generated.h"

UENUM(BlueprintType)
enum class ETetherExpansionEvent : uint8 {
    None,
    PlayerDamage,
    CompanionDamage,
    NPCDamage,
    CompanionCommand,
    SwitchTargetFromPlayer,
    SwitchTargetToPlayer,
    EnterCombat,
};

