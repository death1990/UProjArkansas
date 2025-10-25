#include "ItemDegradationAlertWidget.h"

UItemDegradationAlertWidget::UItemDegradationAlertWidget() {
    this->MainInvalidationBox = NULL;
    this->WeaponEntry = NULL;
    this->HeadEntry = NULL;
    this->BodyEntry = NULL;
}

void UItemDegradationAlertWidget::OnUnequippedArmor(EArmorSlot ArmorSlotIn) {
}

void UItemDegradationAlertWidget::OnHUDVisibilityChanged(bool bVisible) {
}

void UItemDegradationAlertWidget::OnEquipmentRepairVisibilityChanged(bool bVisible) {
}


