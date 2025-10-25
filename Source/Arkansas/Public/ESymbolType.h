#pragma once
#include "CoreMinimal.h"
#include "ESymbolType.generated.h"

UENUM(BlueprintType)
enum class ESymbolType : uint8 {
    DamageType,
    Buff,
    Debuff,
    MapCompass,
    Count,
    Invalid,
};

