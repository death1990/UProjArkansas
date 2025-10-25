#pragma once
#include "CoreMinimal.h"
#include "EDisablePriority.generated.h"

UENUM(BlueprintType)
enum class EDisablePriority : uint8 {
    Invalid,
    IdleDisable,
    ShockFace,
    DelayableCombatEffect,
    LightHitReact,
    HeavyHitReact,
    ImmediateCombatEffect,
    CalledShotCombatEffect,
    PushEffect,
    RagdollDisable,
};

