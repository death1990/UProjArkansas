#include "OnItemCountChanged.h"

UOnItemCountChanged::UOnItemCountChanged() {
    this->bRequireOldCount = false;
    this->OldItemCount = 0;
    this->OldItemCountOperator = EComparisonOperator::Equals;
    this->bRequireNewCount = false;
    this->NewItemCount = 0;
    this->NewItemCountOperator = EComparisonOperator::Equals;
}

void UOnItemCountChanged::OnItemCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack, int32 OldCount) {
}


