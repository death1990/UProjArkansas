#pragma once
#include "CoreMinimal.h"
#include "EStimulusType.generated.h"

UENUM(BlueprintType)
enum class EStimulusType : uint8 {
    None,
    Distraction,
    SightActive,
    SightInactive,
    Projectile,
    GrenadeSight,
    GenericSound,
    DeadBodyKiller,
    Shout,
    ForceDetect,
    Damage,
    FriendInCombat,
    EncounterAggro,
    EnteredRestrictedArea,
    Crime,
    SawFriendKilledByPlayer,
    AutoDetect,
    PickpocketSound,
    LockpickSound,
    HackSound,
    ProjectileWizz,
    Alarm,
    EnteredCautiousAlertState,
    HitByDistraction,
    SawPlayerThrowDistraction,
    GunSound,
    GrenadeBounceSound,
    Death,
};

