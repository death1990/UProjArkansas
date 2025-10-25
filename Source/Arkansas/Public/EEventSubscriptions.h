#pragma once
#include "CoreMinimal.h"
#include "EEventSubscriptions.generated.h"

UENUM(BlueprintType)
enum class EEventSubscriptions : uint8 {
    CombatStateChange,
    WeaponChange,
    HealthChange,
    TTDChange,
    RestrictedAreaChange,
    ToxicityChange,
    RadChange,
    RestrictedAreaBufferChange,
    WeaponEquippedUnequipped,
    AbilityStatusChanged,
    BodyFoundEvent,
    IconDisplayRequestEvents,
};

