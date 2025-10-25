#include "PlayerInventoryComponent.h"
#include "Templates/SubclassOf.h"

UPlayerInventoryComponent::UPlayerInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayerOwned = true;
    this->BaseCarryingCapacity = 100.00f;
    this->LootOnBreakdownChanceStat = NULL;
    this->ModFinderFieldRepairStat = NULL;
    this->ScavengeMaxItemLevelStat = NULL;
    this->EvilMoonManAudioEvent = NULL;
}

void UPlayerInventoryComponent::VendorRepairItemDebug(const FName& ItemName) {
}

void UPlayerInventoryComponent::UnlearnRecipe(TSubclassOf<UCraftingRecipe> Recipe) {
}

void UPlayerInventoryComponent::SetWeaponHealthDebug(float Percent) {
}

void UPlayerInventoryComponent::SetItemHealthDebug(const FName& ItemName, float Percent) {
}

void UPlayerInventoryComponent::SetHelmetHealthDebug(float Percent) {
}

void UPlayerInventoryComponent::SetArmorHealthDebug(float Percent) {
}

void UPlayerInventoryComponent::RepairItemDebug(const FName& ItemName, bool bFieldRepair) {
}

void UPlayerInventoryComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UPlayerInventoryComponent::OnPlayerLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 PlayerLevel) {
}

void UPlayerInventoryComponent::OnCompanionRegistered(AIndianaAiCharacter* Character, bool bAdded) {
}

void UPlayerInventoryComponent::LearnRecipe(TSubclassOf<UCraftingRecipe> Recipe) {
}

void UPlayerInventoryComponent::IgnoreEncumbrance(bool bIgnored) {
}

bool UPlayerInventoryComponent::HasPlayerCompletedMostCards() const {
    return false;
}

bool UPlayerInventoryComponent::HasPlayerCompletedAllCards() const {
    return false;
}

void UPlayerInventoryComponent::GiveTools() {
}

int32 UPlayerInventoryComponent::GetNumOfCollectedCards() const {
    return 0;
}

bool UPlayerInventoryComponent::DoesPlayerKnowRecipe(TSubclassOf<UCraftingRecipe> Recipe) const {
    return false;
}

void UPlayerInventoryComponent::CraftingRemoveRecipe(const FName& RecipeName) {
}

void UPlayerInventoryComponent::CraftingRemoveAllRecipes() {
}

void UPlayerInventoryComponent::CraftingOpenCraftingUI() {
}

void UPlayerInventoryComponent::CraftingOpenBreakDownUI() {
}

void UPlayerInventoryComponent::CraftingGiveAllMaterialComponents() {
}

void UPlayerInventoryComponent::CraftingBreakDownItem(const FName& ItemName) {
}

void UPlayerInventoryComponent::CraftingAddRecipe(const FName& RecipeName) {
}

void UPlayerInventoryComponent::CraftingAddAllRecipes() {
}

bool UPlayerInventoryComponent::CanPlayerCraftItem(TSubclassOf<UItem> ItemClass) const {
    return false;
}

void UPlayerInventoryComponent::BreakDownItemDebug(const FName& ItemName, bool bFieldBreakdown) {
}


