#include "OnItemConsumed.h"

UOnItemConsumed::UOnItemConsumed() {
    this->bIsNourishmentConsume = false;
}

void UOnItemConsumed::OnItemConsumed(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}


