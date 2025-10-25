#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTypeChatterParam.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectTypeChatterParam : uint8 {
    Placeholder,
    ElektrumCoughLight,
    ElektrumCoughHeavy,
    Burn,
    PlasmaExplosion,
    NRadiated,
    Chilled,
    Frozen,
    Vulnerable,
    Dissolved,
    Electrocuted,
    Paralyzed,
    Taunted,
    Goaded,
    Confused,
    Glooped,
    KnockedDown,
    Knockback,
    Frightened,
    Stunned,
    Bleed,
};

