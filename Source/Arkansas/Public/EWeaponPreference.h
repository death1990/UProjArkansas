#pragma once
#include "CoreMinimal.h"
#include "EWeaponPreference.generated.h"

UENUM(BlueprintType)
enum class EWeaponPreference : uint8 {
    UsePrimary,
    PreferRanged,
    Contextual,
    PreferMeleeOrLimited,
    AlwaysRanged,
    AlwaysMelee,
};

