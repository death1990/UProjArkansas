#pragma once
#include "CoreMinimal.h"
#include "EWeaponState.generated.h"

UENUM(BlueprintType)
enum class EWeaponState : uint8 {
    Invalid,
    Equipped,
    Reloading,
    Firing,
    Active,
    Charging,
    ChargeUp,
    ChargeFull,
    FineAiming,
    FullyFineAimed,
    BeamLocked,
    FiringFineAiming,
    FiringScoped,
    FiringNotAiming,
    ReChamber,
    WeaponDown,
    CalledShot,
    MeleeCharging,
    SpinningUp,
    SpinningDown,
    Holstered,
    Blocking,
    FirePatternActive,
};

