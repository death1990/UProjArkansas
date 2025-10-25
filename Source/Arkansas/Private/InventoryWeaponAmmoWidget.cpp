#include "InventoryWeaponAmmoWidget.h"

UInventoryWeaponAmmoWidget::UInventoryWeaponAmmoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
    this->Image = NULL;
    this->CountTextBlock = NULL;
}

void UInventoryWeaponAmmoWidget::SetIcon(UTexture2D* Icon) {
}


