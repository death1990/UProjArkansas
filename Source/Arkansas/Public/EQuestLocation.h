#pragma once
#include "CoreMinimal.h"
#include "EQuestLocation.generated.h"

UENUM(BlueprintType)
enum class EQuestLocation : uint8 {
    Eden,
    Anchorite,
    Dorado,
    FreeMarket,
    Cloister,
    CloisterUnder,
    Praetor,
    Nyx,
    Space,
    AC,
    Order,
    BothFactions,
    None,
    Count,
};

