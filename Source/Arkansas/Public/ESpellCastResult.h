#pragma once
#include "CoreMinimal.h"
#include "ESpellCastResult.generated.h"

UENUM(BlueprintType)
enum class ESpellCastResult : uint8 {
    Success,
    AlreadyActive,
    InvalidTarget,
    OnCooldown,
    NotEnoughResources,
    Count,
    Invalid,
};

