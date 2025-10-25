#include "CompanionManagerComponent.h"

UCompanionManagerComponent::UCompanionManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->HostileAutoDetectionPlayerLineOfSightTime = 1.00f;
    this->HostileAutoDetectionPlayerDistance = 500.00f;
    this->CompanionTriggerObservationChance = 0.25f;
    this->RecruitedCommandChargePercentage = 0.10f;
}

void UCompanionManagerComponent::ToggleCompanionsCanSelfRevive() {
}

void UCompanionManagerComponent::SetCompanionOutlineMode(EHUDWidgetVisibilityMode OutlineMode) {
}

void UCompanionManagerComponent::SetCompanionHelmetVisibility(int32 HelmetVisibility) {
}

void UCompanionManagerComponent::SendCharacterToShip(AIndianaAiCharacter* Companion) {
}

void UCompanionManagerComponent::RemoveCompanionFromPartyByRefBP(AIndianaAiCharacter* Companion, bool bDespawn) {
}

void UCompanionManagerComponent::RemoveCompanionFromPartyBP(ESpecialObsidianID CompanionID, bool bDespawn) {
}

void UCompanionManagerComponent::OnPlayerTakeDamage(const FCauseDamageInfo& DamageInfo) {
}

void UCompanionManagerComponent::OnPlayerLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 PlayerLevel) {
}

void UCompanionManagerComponent::OnPlayerKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) {
}

void UCompanionManagerComponent::OnKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) {
}

void UCompanionManagerComponent::OnDifficultyChanged(EGameDifficulty NewDifficulty) {
}

void UCompanionManagerComponent::OnCauseDamage(const FCauseDamageInfo& CauseDamageInfo) {
}

bool UCompanionManagerComponent::IsPartyFull() const {
    return false;
}

AIndianaAiCharacter* UCompanionManagerComponent::GetOtherCompanion(AIndianaAiCharacter* Companion) const {
    return NULL;
}

int32 UCompanionManagerComponent::GetCompanionSlotIndex(AIndianaAiCharacter* InCompanion) const {
    return 0;
}

AIndianaAiCharacter* UCompanionManagerComponent::GetCompanionFromSlot(ECompanionSlot Slot) const {
    return NULL;
}

AIndianaAiCharacter* UCompanionManagerComponent::GetActiveCompanionWithSpecialID(ESpecialObsidianID SpecialID) const {
    return NULL;
}

void UCompanionManagerComponent::DismissCompanionBP(ESpecialObsidianID CompanionID, bool bDespawn) {
}

void UCompanionManagerComponent::DebugKillCompanions() {
}

void UCompanionManagerComponent::AddPerkPointsToCompanions(int32 Points) {
}

void UCompanionManagerComponent::AddCompanionToPartyByRefBP(AIndianaAiCharacter* Companion) {
}

void UCompanionManagerComponent::AddCompanionToPartyBP(ESpecialObsidianID CompanionID, bool bPromptPartySelect) {
}


