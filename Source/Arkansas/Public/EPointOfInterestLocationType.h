#pragma once
#include "CoreMinimal.h"
#include "EPointOfInterestLocationType.generated.h"

UENUM(BlueprintType)
enum class EPointOfInterestLocationType : uint8 {
    DEPRECATED,
    FastTravel,
    Town,
    Cave,
    Dungeon,
    Landmark,
    Vendor,
    VendingMachine,
    Workbench,
};

