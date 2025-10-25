#include "InventoryPageWidget.h"

UInventoryPageWidget::UInventoryPageWidget() {
    this->bDisplayRepairAllEquippedButton = true;
    this->bDisableHoverTooltip = false;
    this->ItemDisplayRule = EItemDisplayRule::DoNotShow;
    this->bSupportsSwapping = false;
    this->HeaderTextBlock = NULL;
    this->ComparisonTextBlock = NULL;
}

void UInventoryPageWidget::SendFocusToItemViewer() {
}



