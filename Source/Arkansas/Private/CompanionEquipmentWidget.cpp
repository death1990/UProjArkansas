#include "CompanionEquipmentWidget.h"

UCompanionEquipmentWidget::UCompanionEquipmentWidget() {
    this->EquipmentBar = NULL;
    this->bIsArmor = false;
    this->NoInventoryReasonText = NULL;
}

void UCompanionEquipmentWidget::OnItemRemovedFromPlayerInventory(const FItemStack& ItemStack) {
}

void UCompanionEquipmentWidget::OnItemAddedToPlayerInventory(const FItemStack& ItemStack) {
}

void UCompanionEquipmentWidget::OnDragDrop_EquipItem(UIndianaDragDropOperation* Operation) {
}


