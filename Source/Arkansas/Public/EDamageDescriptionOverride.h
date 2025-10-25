#pragma once
#include "CoreMinimal.h"
#include "EDamageDescriptionOverride.generated.h"

UENUM(BlueprintType)
enum class EDamageDescriptionOverride : uint8 {
    DamageEventType,
    DamageType,
    DamageTypeStacks,
    GameplayTags,
    GuaranteedStatusEffects,
    CanDamageFriends,
    MeleeAttackType,
    HitReactionType,
    PreferredDeathClass,
    BaseDamage,
    NPCVsNPCMultiplier,
    NegatedPercThreshold,
    BaseCritChance,
    CritMultiplier,
    StealthMultiplier,
    WeakSpotMultiplier,
    DamageResistanceMultiplier,
    DamageThresholdMultiplier,
    ArmorPenetration,
    ImpulseOverride,
    MinimumDamage,
    InnerRadius,
    OuterRadius,
    DamageFalloff,
    ExpansionRate,
};

