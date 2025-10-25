#pragma once
#include "CoreMinimal.h"
#include "ESpellConditionTarget.generated.h"

UENUM(BlueprintType)
enum class ESpellConditionTarget : uint8 {
    Target,
    Caster,
    Player,
    CompanionSlot1,
    CompanionSlot2,
};

