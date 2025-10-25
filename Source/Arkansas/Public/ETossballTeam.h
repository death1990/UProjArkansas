#pragma once
#include "CoreMinimal.h"
#include "ETossballTeam.generated.h"

UENUM(BlueprintType)
enum class ETossballTeam : uint8 {
    None,
    Mammoths,
    TileBackers,
    SpacersChosen,
    HappyDaleFarmers,
    AuntieCleosDarlings,
    HSThunder,
    DocRocketAstros,
    TLTigers,
    CPPlayers,
    RizzosRangers,
    Count,
    Invalid,
};

