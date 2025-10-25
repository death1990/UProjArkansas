#include "CompanionScreenWrapperWidget.h"

UCompanionScreenWrapperWidget::UCompanionScreenWrapperWidget() {
    this->bStopOnlyGameInput = true;
    this->Companions = NULL;
    this->ActorRender = NULL;
    this->CompanionItemViewer = NULL;
}


void UCompanionScreenWrapperWidget::AddItemToItemViewer(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}


