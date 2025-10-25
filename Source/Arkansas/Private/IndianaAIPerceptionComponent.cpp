#include "IndianaAIPerceptionComponent.h"

UIndianaAIPerceptionComponent::UIndianaAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutOfCombatInteriorSightConfig = NULL;
    this->OutOfCombatExteriorSightConfig = NULL;
    this->InCombatSightConfig = NULL;
    this->InCombatHearingRangeScalar = 1.00f;
    this->OutOfCombatInteriorHearingRangeScalar = 1.00f;
    this->OutOfCombatExteriorHearingRangeScalar = 1.00f;
}

void UIndianaAIPerceptionComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UIndianaAIPerceptionComponent::OnPerceptionRangeScalarUpdated(const FGameplayTagContainer& CreatureType) {
}

void UIndianaAIPerceptionComponent::OnGodVisionChanged(bool bGodVision) {
}

void UIndianaAIPerceptionComponent::OnDormancyChanged(AIndianaAiCharacter* Character, bool bNewDormancy) {
}

void UIndianaAIPerceptionComponent::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

void UIndianaAIPerceptionComponent::OnCharacterResurrected() {
}

void UIndianaAIPerceptionComponent::OnCharacterDeath(AActor* Instigator, const FCauseDamageInfo& CauseDamageInfo) {
}


