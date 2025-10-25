#include "ARCC_CreationEntryItem.h"

UARCC_CreationEntryItem::UARCC_CreationEntryItem() {
    this->LockedOpacity = 0.50f;
    this->bUseTemporaryDefaultString = false;
    this->MainButton = NULL;
    this->CreationItemIcon = NULL;
    this->SelectedItemPanel = NULL;
    this->LockedItemPanel = NULL;
    this->CreationItemNameText = NULL;
    this->CreationItemFlavorText = NULL;
    this->CreationItemDetailText = NULL;
}

void UARCC_CreationEntryItem::SetItemSelected(bool bIsSelected) {
}

void UARCC_CreationEntryItem::SetItemLocked(bool bIsLocked) {
}







bool UARCC_CreationEntryItem::IsSelected() const {
    return false;
}

bool UARCC_CreationEntryItem::IsLocked() const {
    return false;
}


