#pragma once
#include "CoreMinimal.h"
#include "EDamageBaseAmount.generated.h"

UENUM(BlueprintType)
enum class EDamageBaseAmount : uint8 {
    Default,
    WeaponDPS,
};

