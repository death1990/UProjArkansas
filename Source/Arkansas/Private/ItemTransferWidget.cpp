#include "ItemTransferWidget.h"

UItemTransferWidget::UItemTransferWidget() {
    this->StackSplittingClass = NULL;
    this->HeaderDeselectColor = EIndianaUIColorType::TextColorCustomization158;
    this->HeaderSelectColor = EIndianaUIColorType::IndianaYellow;
    this->PlayerStats = NULL;
    this->InventoryHeaderTextBlock = NULL;
    this->PlayerHeaderTextBlock = NULL;
    this->LabelGroup = NULL;
    this->ViewerNavigation = NULL;
    this->PlayerViewer = NULL;
    this->NewPlayerHighlight = NULL;
    this->PlayerHighlight = NULL;
    this->InventoryViewer = NULL;
    this->NewInventoryHighlight = NULL;
    this->InventoryHighlight = NULL;
    this->StaticTooltip = NULL;
}

void UItemTransferWidget::OnPlayerItemRemoved(UInventoryComponent* InventoryComponent, const FItemStack& Item) {
}

void UItemTransferWidget::OnPlayerItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& Item) {
}

void UItemTransferWidget::OnPlayerCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UItemTransferWidget::OnItemViewerSortingChanged() {
}

void UItemTransferWidget::OnItemCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UItemTransferWidget::OnInventoryItemRemoved(UInventoryComponent* InventoryComponent, const FItemStack& Item) {
}

void UItemTransferWidget::OnInventoryItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& Item) {
}


