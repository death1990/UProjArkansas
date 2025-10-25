#include "ItemContainerWidget.h"

UItemContainerWidget::UItemContainerWidget() {
    this->ComparisonOffsetX = 0.00f;
    this->ComparisonAlignmentX = 0.50f;
    this->NonComparisonOffsetX = 0.00f;
    this->NonComparisonAlignmentX = 0.50f;
    this->ItemRemovedSound = NULL;
    this->List = NULL;
    this->HeaderTextBlock = NULL;
    this->LabelGroup = NULL;
    this->TheftImage = NULL;
    this->PrimaryPanel = NULL;
    this->PlaybackMultiplier = 10.00f;
}

void UItemContainerWidget::OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UItemContainerWidget::OnItemCountChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UItemContainerWidget::OnItemAdded(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UItemContainerWidget::OnFadeOutComplete() {
}


