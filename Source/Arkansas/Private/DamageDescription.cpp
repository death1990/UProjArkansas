#include "DamageDescription.h"

FDamageDescription::FDamageDescription() {
    this->DamageEventType = EDamageEventType::Invalid;
    this->DamageType = NULL;
    this->DamageTypeStacks = 0;
    this->bUseOwnerAsStatusEffectOriginActor = false;
    this->bCanDamageFriends = false;
    this->bCanKillPlayer = false;
    this->MeleeAttackType = EMeleeAttackType::None;
    this->HitReactionType = EHitReactType::None;
    this->bIgnoreInflictedDamageHitReaction = false;
    this->bIgnoreFlinchHitReaction = false;
    this->PreferredDeathClass = NULL;
    this->BaseDamage = 0.00f;
    this->NPCVsNPCMultiplier = 0.00f;
    this->NegatedPercThreshold = 0.00f;
    this->BaseCritChance = 0.00f;
    this->CritMultiplier = 0.00f;
    this->StealthMultiplier = 0.00f;
    this->WeakSpotMultiplier = 0.00f;
    this->DamageResistanceMultiplier = 0.00f;
    this->DamageThresholdMultiplier = 0.00f;
    this->ArmorPenetration = 0.00f;
    this->ImpulseOverride = 0.00f;
    this->MinimumDamage = 0.00f;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->DamageFalloff = 0.00f;
    this->ExpansionRate = 0.00f;
}

