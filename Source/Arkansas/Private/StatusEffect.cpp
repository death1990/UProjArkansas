#include "StatusEffect.h"

UStatusEffect::UStatusEffect() {
    this->InitialApplicationType = EStatusEffectInitialApplicationType::StackIfAlreadyApplied;
    this->DurationType = EStatusEffectDurationType::UseDurationTime;
    this->MaxDuration = 0.00f;
    this->Duration = 0.00f;
    this->DurationRpgStat = NULL;
    this->bDurationIgnoresTimeDilation = false;
    this->bDurationAlwaysAffected = false;
    this->OriginOffensiveSkill = ESkill::Melee;
    this->TargetDefensiveAttribute = EAttribute::Strength;
    this->ApplicationType = EStatusEffectApplicationType::ApplyOnStart;
    this->Interval = 0.00f;
    this->bUseIntervalStackCurve = false;
    this->bIgnoreFinalTick = false;
    this->bIsHostile = false;
    this->bProhibitsConversations = false;
    this->bRemoveWithSpell = true;
    this->bAllowOnDead = false;
    this->bRestoreSpellReference = false;
    this->bSavePermanentStatusEffect = false;
    this->StartEventEffects = NULL;
    this->ApplyEventEffects = NULL;
    this->EndEventEffects = NULL;
    this->UIVisualsData = NULL;
    this->bChatterEnabled = false;
    this->ChatterParam = EStatusEffectTypeChatterParam::Placeholder;
    this->ChatterPlayType = EStatusEffectChatterPlayType::PlayOnAdded;
    this->ChatterInterval = 5.00f;
    this->bStopChatterOnEnd = false;
    this->bPreventRestore = false;
    this->bIgnoreImmune = false;
    this->bDontDisplayDescription = false;
    this->bDontDisplayNameInDescription = false;
    this->bAppendDescriptionToPrevious = false;
}




float UStatusEffect::GetInterval(int32 NumStacks) const {
    return 0.0f;
}

EStatusEffectDurationType UStatusEffect::GetDurationType() const {
    return EStatusEffectDurationType::UseDurationTime;
}

float UStatusEffect::GetBaseDuration(const URpgStatComponent* InStatComponent) const {
    return 0.0f;
}

EStatusEffectApplicationType UStatusEffect::GetApplicationType() const {
    return EStatusEffectApplicationType::ApplyOnStart;
}


