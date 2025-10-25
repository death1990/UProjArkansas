#include "InventoryAmmoPool.h"

UInventoryAmmoPool::UInventoryAmmoPool() {
    this->DefaultAmmoClass = NULL;
    this->bAllowAllAmmoTypes = false;
    this->CurrentAmmo = NULL;
}

void UInventoryAmmoPool::UpdateAllAmmoTypePool() {
}

void UInventoryAmmoPool::OnItemRemovedFromInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UInventoryAmmoPool::OnItemCountChangedInInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UInventoryAmmoPool::OnItemAddedToInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}


