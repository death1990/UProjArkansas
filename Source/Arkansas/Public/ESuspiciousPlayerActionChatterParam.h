#pragma once
#include "CoreMinimal.h"
#include "ESuspiciousPlayerActionChatterParam.generated.h"

UENUM(BlueprintType)
enum class ESuspiciousPlayerActionChatterParam : uint8 {
    InRestrictedAreaBufferVolumeAccessDenied,
    InRestrictedAreaBufferVolumeAccessGranted,
    DistractionThrown,
    WeaponFired,
    Crouching,
    AimingWeaponAtFriend,
};

