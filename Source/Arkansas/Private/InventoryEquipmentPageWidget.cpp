#include "InventoryEquipmentPageWidget.h"

UInventoryEquipmentPageWidget::UInventoryEquipmentPageWidget() {
    this->bDisplayEquippedItems = true;
    this->SlotNumberUnavailableOpacity = 0.50f;
    this->WidgetClass = NULL;
    this->WeaponButton0 = NULL;
    this->WeaponButton1 = NULL;
    this->WeaponButton2 = NULL;
    this->WeaponButton3 = NULL;
    this->WeaponDragContainer0 = NULL;
    this->WeaponDragContainer1 = NULL;
    this->WeaponDragContainer2 = NULL;
    this->WeaponDragContainer3 = NULL;
    this->UnavailableImage0 = NULL;
    this->UnavailableImage1 = NULL;
    this->UnavailableImage2 = NULL;
    this->UnavailableImage3 = NULL;
    this->WeaponSlotNumber0 = NULL;
    this->WeaponSlotNumber1 = NULL;
    this->WeaponSlotNumber2 = NULL;
    this->WeaponSlotNumber3 = NULL;
    this->WeaponEquipmentBorder = NULL;
    this->AmmoDisplayWidget = NULL;
    this->ArmorHeaderTextBlock = NULL;
    this->ArmorButton0 = NULL;
    this->ArmorButton1 = NULL;
    this->ArmorDragContainer0 = NULL;
    this->ArmorDragContainer1 = NULL;
    this->ArmorEquipmentBorder = NULL;
    this->BrandEnthusiastDisplayPanel = NULL;
    this->BrandEnthusiastInfo = NULL;
}

void UInventoryEquipmentPageWidget::SetEquippedArmorSlot(EArmorSlot ArmorSlotIn) {
}


