#pragma once
#include "CoreMinimal.h"
#include "ESoundDetectionType.generated.h"

UENUM(BlueprintType)
enum class ESoundDetectionType : uint8 {
    None,
    Projectile,
    Gun,
    Shout,
    ShoutLoS,
    ShoutDeath,
    LockPick,
    Hack,
    ArmTrap,
    DisarmTrap,
    Footstep,
    PickPocket,
    ProjectileWizz,
    Bumped,
    ShoutSight,
    ShoutProxy,
    ShoutDeathProxy,
    Explosion,
    Distraction,
    GrenadeBounce,
    Alarm,
    StatusEffect,
    Death,
    PerkBadKnees,
    Count,
};

