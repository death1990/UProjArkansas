#pragma once
#include "CoreMinimal.h"
#include "ELedgerPages.generated.h"

UENUM(BlueprintType)
enum class ELedgerPages : uint8 {
    CharacterStats,
    Inventory,
    Map,
    Journal,
    CompanionCondensed,
    Companion1,
    Companion2,
    Companion3,
    Companion4,
    Companion5,
    Companion6,
    Count,
    Invalid,
};

