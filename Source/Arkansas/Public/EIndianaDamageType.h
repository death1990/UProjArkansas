#pragma once
#include "CoreMinimal.h"
#include "EIndianaDamageType.generated.h"

UENUM(BlueprintType)
enum class EIndianaDamageType : uint8 {
    Physical,
    Plasma,
    Shock,
    Corrosion,
    NRay,
    Frost,
    Count,
    Invalid,
};

