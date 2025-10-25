#include "BaseInventoryItemManagement.h"

UBaseInventoryItemManagement::UBaseInventoryItemManagement() {
    this->ItemViewer = NULL;
    this->ItemViewerNavigation = NULL;
    this->bPreventUnjunkForAutoJunk = true;
    this->PageScrollBox = NULL;
    this->BreakdownPopup = NULL;
    this->ScrollingWidgetGroup = NULL;
    this->HoveredItem = NULL;
    this->CharacterRenderer = NULL;
}

void UBaseInventoryItemManagement::OnItemViewerSortingChanged() {
}

void UBaseInventoryItemManagement::OnDragDrop_SetArmorSlot(UIndianaDragDropOperation* Operation) {
}

void UBaseInventoryItemManagement::OnDragDrop_JunkItem(UIndianaDragDropOperation* Operation) {
}

void UBaseInventoryItemManagement::OnDragDrop_ClearWeaponSlot(UIndianaDragDropOperation* Operation) {
}

void UBaseInventoryItemManagement::OnDragDrop_BreakDownItem(UIndianaDragDropOperation* Operation) {
}


