#pragma once
#include "CoreMinimal.h"
#include "ETTDMeterVisibility.generated.h"

UENUM(BlueprintType)
enum class ETTDMeterVisibility : uint8 {
    Off,
    ReticleOnly,
    EquipmentOnly,
    Both,
};

