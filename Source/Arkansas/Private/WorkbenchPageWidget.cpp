#include "WorkbenchPageWidget.h"

UWorkbenchPageWidget::UWorkbenchPageWidget() {
    this->bStopOnlyGameInput = true;
    this->InputLabelGroup = NULL;
    this->FlavorTextWidget = NULL;
}

void UWorkbenchPageWidget::OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}


