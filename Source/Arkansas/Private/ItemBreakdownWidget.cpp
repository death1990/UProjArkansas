#include "ItemBreakdownWidget.h"

UItemBreakdownWidget::UItemBreakdownWidget() {
    this->bStopOnlyGameInput = true;
    this->DefaultSortingType = EMaterialSorting::Alphabetical;
    this->BreakdownSplittingClass = NULL;
    this->BreakdownDialogueClass = NULL;
    this->MaterialEntryClass = NULL;
    this->bReapplyFilterOnPageChange = false;
    this->bHideIrrelevantMaterials = false;
    this->MaterialEntryPanel = NULL;
    this->MaterialEntryScrollBox = NULL;
    this->MaterialFilterSwitcher = NULL;
    this->EmptyFilterDisplay = NULL;
    this->ActiveMaterialFilter = NULL;
    this->InputLabelGroup = NULL;
    this->BreakdownGainContainer = NULL;
    this->StaticTooltip = NULL;
    this->SortDirectionImage = NULL;
    this->SortLabel = NULL;
    this->ChangeSortLabel = NULL;
    this->BreakdownKitInfo = NULL;
    this->HermitFlawInfo = NULL;
    this->SalvagingInfo = NULL;
    this->ShowBreakdownResults = NULL;
    this->PreviousWidget = NULL;
    this->SelectedWidget = NULL;
}

void UItemBreakdownWidget::SendFocusToMaterialList() {
}

void UItemBreakdownWidget::SendFocusToItemViewer() {
}

void UItemBreakdownWidget::OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UItemBreakdownWidget::OnItemCountChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UItemBreakdownWidget::OnItemAdded(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}




void UItemBreakdownWidget::BreakdownAnimationFinished() {
}


