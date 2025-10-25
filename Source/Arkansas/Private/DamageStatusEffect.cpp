#include "DamageStatusEffect.h"

UDamageStatusEffect::UDamageStatusEffect() {
    this->DamageValue = 0.00f;
    this->DamageValuePercent = 0.00f;
    this->MaxPercentDamage = -1.00f;
    this->bUsePassThroughValue = false;
    this->bIgnoreDamageStat = false;
    this->PassThroughValuePercentageMultiplier = 1.00f;
    this->bOverrideCritMultiplier = false;
    this->CritMultiplierOverride = 1.00f;
    this->DamageValueType = EDamageValueType::Value;
    this->BaseDamageType = EDamageBaseAmount::Default;
    this->DamageScalars = 0;
    this->DamageType = NULL;
    this->DamageTypeStacks = 1;
    this->ImpactDataSet = NULL;
    this->bAllDamageTypes = false;
    this->bIgnoreDTDR = true;
    this->bAllowFriendlyFire = false;
    this->bCanKillPlayer = true;
    this->bAOE = false;
    this->bAOEIgnoreSourceTarget = false;
    this->bAOEIgnoreFriendlyTargets = false;
    this->bAOERequiresLOS = false;
    this->AOETargetType = EAOEDamageTarget::AllTargetsInAOE;
    this->AOENumberOfTargets = 1;
    this->bCompanionCommand = false;
    this->bMelee = false;
    this->bArmageddon = false;
    this->bCanApplyDamageTypeSpell = true;
    this->DamageScalingStat = NULL;
    this->bUseCasterWeaponAsSource = false;
    this->bUseTargetAsDamageInstigator = false;
    this->bIgnoreHitReaction = false;
}


