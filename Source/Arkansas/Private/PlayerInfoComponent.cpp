#include "PlayerInfoComponent.h"
#include "Templates/SubclassOf.h"

UPlayerInfoComponent::UPlayerInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericInteractionXP = 0;
    this->QuestXPPercentFromObjectives = 0.60f;
    this->NumSkillsPointsPerLevel = 10;
    this->MaxSkillLevelForCategoryPoints = 50;
    this->MaxSkillLevel = 100;
    this->NumSkillLevelsBetweenUpgrades = 20;
    this->PointsForTaggedSkill = 2;
    this->FlawOfferCooldown = 3600.00f;
    this->PriorityFlaw = NULL;
    this->ConsumerismFlaw = NULL;
    this->PendingOfferFlaw = NULL;
    this->QueuedOfferFlaw = NULL;
    this->Aptitude = NULL;
    this->DumbTrait = NULL;
    this->SelectedPet = NULL;
    this->AreaMusicData = NULL;
    this->InventoryEntitlements = NULL;
}

void UPlayerInfoComponent::UnlockPet(TSubclassOf<UPetData> PetData) {
}

void UPlayerInfoComponent::UnlockEntitlements() {
}

void UPlayerInfoComponent::UnlockAllPets() {
}

void UPlayerInfoComponent::TraitRemoveDebug(const FString& TraitName) {
}

void UPlayerInfoComponent::TraitAddDebug(const FString& TraitName) {
}

void UPlayerInfoComponent::ToggleDoubleJump() {
}

void UPlayerInfoComponent::SetPlayerSkillDebug(ESkill Skill, int32 SkillValue) {
}

bool UPlayerInfoComponent::SetFlawAsOfferable(TSubclassOf<UFlaw> Flaw, bool bIgnoreTimer) {
    return false;
}

void UPlayerInfoComponent::SetAptitudeDebug(const FString& AptitudeName) {
}

void UPlayerInfoComponent::SelectPet(TSubclassOf<UPetData> PetData) {
}

void UPlayerInfoComponent::RespecSkillPoints() {
}

void UPlayerInfoComponent::RespecPerks(bool bNoCost) {
}

void UPlayerInfoComponent::ResetFlawOfferTimer() {
}

void UPlayerInfoComponent::OnPlayerTargetedContainer(AContainer* Container) {
}

void UPlayerInfoComponent::OnEntitlementAvailabilityChanged(const FGameplayTag& Entitlement, bool bAdded) {
}

void UPlayerInfoComponent::OnCompanionRegistered(AIndianaAiCharacter* Companion, bool bRegister) {
}

void UPlayerInfoComponent::NextPet() {
}

void UPlayerInfoComponent::LockAllPets() {
}

bool UPlayerInfoComponent::IsTaggedSkill(ESkill Skill) const {
    return false;
}

bool UPlayerInfoComponent::IsPetUnlocked(TSubclassOf<UPetData> PetData) {
    return false;
}

bool UPlayerInfoComponent::IsDumbSkill(ESkill Skill) const {
    return false;
}

void UPlayerInfoComponent::GiveSkills() {
}

TSubclassOf<UPetData> UPlayerInfoComponent::GetSelectedPet() {
    return NULL;
}

ESkillDifficultyTier UPlayerInfoComponent::GetLevelTierEquivalent() const {
    return ESkillDifficultyTier::One;
}

void UPlayerInfoComponent::FlawOfferRejectDebug() {
}

void UPlayerInfoComponent::FlawOfferDebug(const FString& FlawName) {
}

void UPlayerInfoComponent::FlawOfferAcceptDebug() {
}

void UPlayerInfoComponent::FlawClearOfferDebug() {
}

void UPlayerInfoComponent::FlawClearDebug(const FString& FlawName) {
}

void UPlayerInfoComponent::FlawAddDebug(const FString& FlawName) {
}

void UPlayerInfoComponent::DisableFlawOffers() {
}

void UPlayerInfoComponent::DebugUnlockEntitlements() {
}

void UPlayerInfoComponent::ClearPet() {
}

void UPlayerInfoComponent::AddXPDebug(int32 XP) {
}

void UPlayerInfoComponent::AddTaggedSkillDebug(const FString& Skill) {
}

void UPlayerInfoComponent::AddFlaw_BP(TSubclassOf<UFlaw> FlawSubclass) {
}


