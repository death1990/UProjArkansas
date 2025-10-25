#include "InventoryItemWidget.h"
#include "Templates/SubclassOf.h"

UInventoryItemWidget::UInventoryItemWidget() {
    this->EquippedTexture = NULL;
    this->UnequippedTexture = NULL;
    this->UnequippedOpacity = 1.00f;
    this->bOnlyShowJunkForMarkedItems = true;
    this->bShowTaggedStatus = true;
    this->bHideUniqueModSlots = false;
    this->bHideLockedModSlots = false;
    this->bHideFavoriteDuringSwap = false;
    this->JunkImage = NULL;
    this->PermaJunkImage = NULL;
    this->SellImage = NULL;
    this->NewItemImage = NULL;
    this->SelectedImage = NULL;
    this->VendorTheftImage = NULL;
    this->TheftImage = NULL;
    this->CompareImage = NULL;
    this->SwapDisplay = NULL;
    this->DamageTypePanel = NULL;
    this->CountTextBlock = NULL;
    this->ValueTextBlock = NULL;
    this->IconImage = NULL;
    this->RestrictedImage = NULL;
    this->ElementImage = NULL;
    this->TagImage = NULL;
    this->RestrictedPerkWidget = NULL;
    this->AmmoTypeImage = NULL;
    this->ModDisplayPanel = NULL;
    this->ModPanel = NULL;
    this->ModBgPanel = NULL;
    this->EquippedImage = NULL;
    this->UncommonImage = NULL;
    this->UniqueImage = NULL;
    this->ScienceImage = NULL;
    this->UpgradeTierSwitcher = NULL;
    this->FocusOn = NULL;
    this->FocusOff = NULL;
    this->ActiveOn = NULL;
    this->ActiveOff = NULL;
}



TSubclassOf<UIndianaDamageType> UInventoryItemWidget::GetDamageType() const {
    return NULL;
}


