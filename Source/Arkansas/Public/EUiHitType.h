#pragma once
#include "CoreMinimal.h"
#include "EUiHitType.generated.h"

UENUM(BlueprintType)
enum class EUiHitType : uint8 {
    INVALID,
    ENormalMeleeHit,
    EWeakspotMeleeHit,
    ECriticalMeleeHit,
    EWeakspotCriticalMeleeHit,
    EArmorMeleeHit,
    EArmorWeakspotMeleeHit,
    EArmorCriticalMeleeHit,
    EArmorWeakspotCriticalMeleeHit,
    EMeleeDestructibleHit,
    EMeleeDestructibleBreak,
    ENormalRangeHit,
    EWeakspotRangeHit,
    ECriticalRangeHit,
    EWeakspotCriticalRangeHit,
    EArmorRangeHit,
    EArmorWeakspotRangeHit,
    EArmorCriticalRangeHit,
    EArmorWeakspotCriticalRangeHit,
    ERangeDestructibleHit,
    ERangeDestructibleBreak,
    EGrenadeHit,
    ETickDamage,
};

