#pragma once
#include "CoreMinimal.h"
#include "ETogglableAction.generated.h"

UENUM(BlueprintType)
enum class ETogglableAction : uint8 {
    Dodge,
    Lunge,
    Disarmed,
    CanFlinch,
    MindControlled,
    IgnoreMeleeDamage,
    IgnorePawnCollision,
    Untargetable,
    Undamageable,
    Blind,
    Sprint,
    StatusEffectImmune,
    WeaponCrit,
    DisableLocalAvoidance,
    Slide,
    ReloadUninterruptible,
    MultiJump,
    DisableImmune,
    DisableReload,
    DisableThrowGrenade,
    DisableBlindFire,
    DisableStepOutFire,
    DisableExitCover,
    DisableEnterCover,
    DisableParkour,
    DisableHitReaction,
    ZyraniumHazardSafe,
};

