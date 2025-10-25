#pragma once
#include "CoreMinimal.h"
#include "ETurretActivationType.generated.h"

UENUM(BlueprintType)
enum class ETurretActivationType : uint8 {
    Default,
    AlwaysOpen,
    AlwaysClosed,
};

