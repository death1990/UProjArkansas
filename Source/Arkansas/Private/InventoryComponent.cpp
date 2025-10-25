#include "InventoryComponent.h"
#include "Templates/SubclassOf.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanLoot = true;
    this->BaseLootTable = NULL;
    this->SecondaryTable = NULL;
    this->bIsOneOff = true;
    this->bOverrideNonPlayerOwnership = false;
    this->bOverridePlayerOwnership = false;
    this->OwningFaction = NULL;
    this->bPlayerOwned = false;
    this->bUseContainerTagForMedKit = false;
}

bool UInventoryComponent::TransferItemsBetweenActorsByTag(AActor* SourceActor, AActor* DestinationActor, FGameplayTagContainer MatchTags, int32 Count, bool bPotentialTheft) {
    return false;
}

void UInventoryComponent::ShowItemRemovedNotification(TSubclassOf<UItem> ItemType, int32 Count) {
}

void UInventoryComponent::ShowItemGainedNotification(TSubclassOf<UItem> ItemType, int32 Count) {
}

bool UInventoryComponent::RemoveItemsFromActorByTag(AActor* Actor, FGameplayTagContainer MatchTags, int32 Count) {
    return false;
}

bool UInventoryComponent::RemoveItemFromPlayer(TSubclassOf<UItem> ItemType, int32 Count) {
    return false;
}

bool UInventoryComponent::RemoveItemFromActor(AActor* Actor, TSubclassOf<UItem> ItemType, int32 Count) {
    return false;
}

void UInventoryComponent::RemoveCurrency(int32 Amount) {
}

void UInventoryComponent::OnUnlockedAbilityAdded(EUnlockAbility Ability) {
}

bool UInventoryComponent::IsEmpty() const {
    return false;
}

bool UInventoryComponent::HasItemCountOnActorByTag(AActor* Actor, FGameplayTagContainer MatchTags, EBoolResult& OutResult, int32 Count) {
    return false;
}

bool UInventoryComponent::HasItemCountOnActorBP(AActor* Actor, TSubclassOf<UItem> ItemType, EBoolResult& OutResult, int32 Count) {
    return false;
}

void UInventoryComponent::GiveLootToPlayer(UStaticLootList* StaticLootList) {
}

void UInventoryComponent::GiveLootToActor(AActor* Actor, UStaticLootList* StaticLootList) {
}

void UInventoryComponent::GiveItemToPlayer(TSubclassOf<UItem> ItemType, int32 Count, bool bShowNotification, bool bPlayItemPickupAudio) {
}

void UInventoryComponent::GiveItemToActor(AActor* Actor, TSubclassOf<UItem> ItemType, int32 Count, bool bLootable) {
}

void UInventoryComponent::GiveCurrency(AActor* Actor, int32 Count) {
}

int32 UInventoryComponent::GetItemCountOnActor(AActor* Actor, TSubclassOf<UItem> ItemType) {
    return 0;
}

bool UInventoryComponent::ContainsLoot() const {
    return false;
}

void UInventoryComponent::AddItemDebug(const FName& ItemName, uint32 Count) {
}

void UInventoryComponent::AddCurrency(int32 Amount, bool bLootable) {
}


