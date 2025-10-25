#pragma once
#include "CoreMinimal.h"
#include "EMeleeAction.generated.h"

UENUM(BlueprintType)
enum class EMeleeAction : uint8 {
    Invalid,
    Idle,
    WindUpRight,
    WindUpLeft,
    AttackRightToLeft,
    AttackLeftToRight,
    WindUpPower,
    PowerAttack,
    WindUpSweep,
    SweepAttack,
    CounterAttack,
    Recoil,
    WindUpNoStamina,
    NoStaminaAttack,
    CalledShotAttack,
    SpecialAttack1,
    SpecialAttack2,
    SpecialAttack3,
    SpecialAttack4,
    CalledShot,
    MidairSlamBuffer,
    MidairSlamDescent,
    MidairSlam,
};

