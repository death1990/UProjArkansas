#include "InventoryThrowablesPageWidget.h"

UInventoryThrowablesPageWidget::UInventoryThrowablesPageWidget() {
    this->FocusLockBorder = NULL;
    this->ThrowableButton0 = NULL;
    this->ThrowableButton1 = NULL;
    this->ThrowableButton2 = NULL;
    this->ThrowableButton3 = NULL;
    this->DragContainer0 = NULL;
    this->DragContainer1 = NULL;
    this->DragContainer2 = NULL;
    this->DragContainer3 = NULL;
    this->UnavailableImage0 = NULL;
    this->UnavailableImage1 = NULL;
    this->UnavailableImage2 = NULL;
    this->UnavailableImage3 = NULL;
    this->WidgetClass = NULL;
}

void UInventoryThrowablesPageWidget::OnItemCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}


