#pragma once
#include "CoreMinimal.h"
#include "EEntryLocationStatus.generated.h"

UENUM()
enum class EEntryLocationStatus : int32 {
    Clear,
    InvalidLocation,
    Ignored,
    InvalidProjectedLocations,
    InvalidExitLocation,
    SpaceBlocked,
    InvalidNav,
    MissingFloor,
    MissingFloorAndRequiresAudit,
};

