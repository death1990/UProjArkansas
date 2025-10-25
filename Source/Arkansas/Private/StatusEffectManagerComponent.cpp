#include "StatusEffectManagerComponent.h"
#include "Templates/SubclassOf.h"

UStatusEffectManagerComponent::UStatusEffectManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->HealthComponent = NULL;
    this->StatComponent = NULL;
}

void UStatusEffectManagerComponent::SetExistingStatusEffectDynamicProperties(TSubclassOf<USpell> Spell, FDynamicEffectProperties InDynamicProperties) {
}

void UStatusEffectManagerComponent::RemoveStatusEffectsOfClass(TSubclassOf<UStatusEffect> Data) {
}

void UStatusEffectManagerComponent::PreventHostileStatusEffectsOnCompanions(bool bPreventHostileStatusEffectsIn, bool bShouldClear) {
}

void UStatusEffectManagerComponent::PreventHostileStatusEffectsNPC(bool bPreventHostileStatusEffectsIn, bool bShouldClear) {
}

void UStatusEffectManagerComponent::PreventHostileStatusEffects(bool bPreventHostileStatusEffectsIn, bool bShouldClear) {
}

void UStatusEffectManagerComponent::PreventAllStatusEffectsOnCompanions(bool bPreventStatusEffectsIn, bool bShouldClear) {
}

void UStatusEffectManagerComponent::PreventAllStatusEffectsNPC(bool bPreventStatusEffectsIn, bool bShouldClear) {
}

void UStatusEffectManagerComponent::PreventAllStatusEffects(bool bPreventStatusEffectsIn, bool bShouldClear) {
}

void UStatusEffectManagerComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

int32 UStatusEffectManagerComponent::GetStatusEffectStackCountFromSpell(TSubclassOf<USpell> Spell) const {
    return 0;
}

int32 UStatusEffectManagerComponent::GetStatusEffectStackCount(TSubclassOf<UStatusEffect> StatusEffect) const {
    return 0;
}

int32 UStatusEffectManagerComponent::GetNumHostileStatusEffects() const {
    return 0;
}

FDynamicEffectProperties UStatusEffectManagerComponent::GetExistingStatusEffectDynamicProperties(TSubclassOf<USpell> Spell) const {
    return FDynamicEffectProperties{};
}

void UStatusEffectManagerComponent::ClearStatusEffectOnCompanions(const FString& Name) {
}

void UStatusEffectManagerComponent::ClearStatusEffectNPC(const FString& Name) {
}

void UStatusEffectManagerComponent::ClearStatusEffect(const FString& Name) {
}

void UStatusEffectManagerComponent::ClearAllStatusEffectsOnCompanions(bool bOnlyHostile) {
}

void UStatusEffectManagerComponent::ClearAllStatusEffectsNPC(bool bOnlyHostile) {
}

void UStatusEffectManagerComponent::ClearAllStatusEffects(bool bOnlyHostile) {
}

bool UStatusEffectManagerComponent::BPHasStatusEffect(TSubclassOf<UStatusEffect> StatusEffect) const {
    return false;
}

void UStatusEffectManagerComponent::BPAddEffect(TSubclassOf<UStatusEffect> Data, AActor* Origin, const FDynamicEffectProperties& EffectProperties) {
}

void UStatusEffectManagerComponent::AddStatusEffectToCompanions(const FString& Name) {
}

void UStatusEffectManagerComponent::AddStatusEffectNPC(const FString& Name) {
}

void UStatusEffectManagerComponent::AddStatusEffect(const FString& Name) {
}


