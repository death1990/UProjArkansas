#pragma once
#include "CoreMinimal.h"
#include "EWeaponDownInhibitor.generated.h"

UENUM(BlueprintType)
enum class EWeaponDownInhibitor : uint8 {
    None,
    WeaponStateInhibitor,
    HostileRelationship,
    Crouching = 4,
    Sprinting = 8,
    Throwable = 16,
    Gadget = 32,
};

