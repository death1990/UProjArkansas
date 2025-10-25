#pragma once
#include "CoreMinimal.h"
#include "ESpecialBeaconType.generated.h"

UENUM(BlueprintType)
enum class ESpecialBeaconType : uint8 {
    None,
    Ship,
    ShipDoor,
    ShipTerminal,
};

