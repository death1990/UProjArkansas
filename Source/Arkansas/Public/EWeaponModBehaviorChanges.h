#pragma once
#include "CoreMinimal.h"
#include "EWeaponModBehaviorChanges.generated.h"

UENUM(BlueprintType)
enum class EWeaponModBehaviorChanges : uint8 {
    Invalid,
    Penetration,
    Ramping,
    BuildUp,
    HipFireAutoAim,
    FineAimAutoAim,
    Tracers,
    AttackWhileSprinting,
    ApplyProjectileDamageDescriptionToSpawnedActor,
    AttackWhileSliding,
    AttackWhileDoingParkour,
    PreFireDelay,
    RequiresReChamberOnFire,
    RequiresTriggerReleaseOnBurst,
    ReloadWhileDoingParkour,
    ReloadWhileSprinting,
    ReloadWhileSliding,
    RequiresTriggerReleaseOnArc,
    IgnoreMovementRestrictionPerks,
};

