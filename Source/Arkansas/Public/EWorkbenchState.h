#pragma once
#include "CoreMinimal.h"
#include "EWorkbenchState.generated.h"

UENUM(BlueprintType)
enum class EWorkbenchState : uint8 {
    ELandingPage,
    Mods,
    PartyUpgrades,
    Crafting,
    Breakdown,
};

