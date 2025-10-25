#pragma once
#include "CoreMinimal.h"
#include "ERpgStatGroupMask.generated.h"

UENUM(BlueprintType)
enum class ERpgStatGroupMask : uint8 {
    None,
    CharacterOnly,
    WeaponOnly,
    CharacterAndWeapon,
};

