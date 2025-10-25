#pragma once
#include "CoreMinimal.h"
#include "EUIMarkerType.generated.h"

UENUM(BlueprintType)
enum class EUIMarkerType : uint8 {
    None,
    Quest,
    POI_Undiscovered,
    AreaBeacon,
    Enemy,
    Hostile,
    POI_Discovered,
    NonHostile,
    HostilePacifist,
    Error,
};

