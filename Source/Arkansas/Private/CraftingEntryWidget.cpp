#include "CraftingEntryWidget.h"

UCraftingEntryWidget::UCraftingEntryWidget() {
    this->DefaultTextColor = EIndianaUIColorType::White;
    this->HighlightTextColor = EIndianaUIColorType::IndianaGrey;
    this->InputActionString = TEXT("Select");
    this->bShowDisabledOnZeroCount = false;
    this->bHideEntryOnZeroCount = false;
    this->bOnlyShowModInterestIfNonZero = false;
    this->bUseFullName = true;
    this->bModShowsParent = true;
    this->Button = NULL;
    this->ItemImage = NULL;
    this->SelectedImage = NULL;
    this->InterestIcon = NULL;
    this->ItemNameText = NULL;
    this->ItemSecondaryText = NULL;
    this->ItemCountText = NULL;
    this->InventoryCountText = NULL;
    this->RestrictionText = NULL;
    this->AddedItemText = NULL;
    this->FavoriteTag = NULL;
    this->ModDisplay = NULL;
    this->ModSlotContainer = NULL;
    this->ModSlotImage = NULL;
    this->DisabledItemPanel = NULL;
    this->HoldToClickActionIconKeyboard = NULL;
    this->HoldToClickActionIconController = NULL;
    this->HoldToClick_InputWidget = NULL;
    this->AddedItem = NULL;
}







bool UCraftingEntryWidget::IsCraftable() const {
    return false;
}


