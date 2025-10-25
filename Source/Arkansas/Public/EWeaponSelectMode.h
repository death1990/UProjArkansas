#pragma once
#include "CoreMinimal.h"
#include "EWeaponSelectMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponSelectMode : uint8 {
    Off,
    TimedFade,
    On,
};

